
// fill code mirror
$(document).ready(function() {
    var elements = $('.cm-show-code');
    for (var i = 0; i < elements.length; i++) {
        var el = elements[i];
        var mode = $(el).attr('cm-mode');
        var cm_el = CodeMirror.fromTextArea(el, {
            lineNumbers: true,
            mode: mode,
            readOnly: true,
            // viewportMargin: 8
        });
        var height = cm_el.lineCount() * cm_el.defaultTextHeight() + 10;
        cm_el.setSize('100%', height);
    }
});