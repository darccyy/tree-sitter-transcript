module.exports = grammar({
    name: "transcript",

    rules: {
        source_file: $ => seq(
            $.panel,
            repeat(seq($.divider, $.panel)),
        ),

        colon: $ => ":",
        bracket_l: $ => '[',
        bracket_r: $ => ']',

        divider: $ => "---",

        panel: $ => repeat1($.line),
        line: $ => seq(
            $.speaker,
            $.text,
        ),

        speaker: $ => choice(
            seq($.character, $.colon),
            seq($.bracket_l, $.special, $.bracket_r),
        ),
        special: $ => choice("sono", "skribo"),
        character: $ => /[A-Z]+/,

        text: $ => /.+/,
    }
});

