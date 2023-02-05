
/* This file was generated by tools/process-metadata. DO NOT EDIT THIS FILE. EVER! */
void
UIConfiguration::build_metadata ()
{

#define VAR_META(name,...)  { char const * _x[] { __VA_ARGS__ }; all_metadata.insert (std::make_pair<std::string,Metadata> ((name), PBD::upcase (_x))); }

	VAR_META (X_("all-floating-windows-are-dialogs"), _("KDE"), _("quirks"), _("dialogs"), _("window"), _("hidden"), _("behind"),  NULL);
	VAR_META (X_("automation-edit-cancels-auto-hide"), _("automation"), _("spill"), _("touch"),  NULL);
	VAR_META (X_("autoscroll-editor"), _("scroll"), _("editor"),  NULL);
	VAR_META (X_("blink-alert-indicators"), _("blink"), _("altert"), _("indicators"),  NULL);
	VAR_META (X_("blink-rec-arm"), _("appearance"), _("blink"), _("record"), _("rec"), _("enable"), _("rec-enable"), _("record-enable"),  NULL);
	VAR_META (X_("boxy-buttons"), _("appearance"), _("style"), _("boxy"), _("buttons"), _("theme"),  NULL);
	VAR_META (X_("buggy-gradients"), _("appearance"), _("bugs"), _("tweaks"), _("kwirks"),  NULL);
	VAR_META (X_("check-announcements"), _("check"), _("announcements"), _("phone"), _("home"),  NULL);
	VAR_META (X_("clock-display-limit"), _("clock"), _("display"), _("limit"), _("length"), _("maximum"), _("duration"),  NULL);
	VAR_META (X_("color-file"), _("theme"), _("colors"), _("appearance"), _("style"), _("themeing"),  NULL);
	VAR_META (X_("color-regions-using-track-color"), _("theme"), _("colors"), _("appearance"), _("style"), _("themeing"),  NULL);
	VAR_META (X_("default-bindings"), _("shortcuts"), _("keys"), _("keybindings"), _("bindings"),  NULL);
	VAR_META (X_("default-lower-midi-note"), _("MIDI"), _("low"), _("lowest"), _("lower"),  NULL);
	VAR_META (X_("default-narrow_ms"), _("appearance"), _("width"), _("mixer"),  NULL);
	VAR_META (X_("default-upper-midi-note"), _("MIDI"), _("upper"), _("high"), _("highest"),  NULL);
	VAR_META (X_("draggable-playhead"), _("playhead"), _("dragging"),  NULL);
	VAR_META (X_("draggable-playhead-speed"), _("playhead"), _("dragging"),  NULL);
	VAR_META (X_("editor-stereo-only-meters"), _("editor"), _("stereo"), _("meters"),  NULL);
	VAR_META (X_("flat-buttons"), _("appearance"), _("style"), _("flat"), _("buttons"), _("theme"), _("ableton"),  NULL);
	VAR_META (X_("floating-monitor-section"), _("appearance"), _("monitor"), _("floating"), _("separate"), _("window"),  NULL);
	VAR_META (X_("font-scale"), _("fonts"), _("font"), _("size"), _("scaling"), _("readable"), _("readability"),  NULL);
	VAR_META (X_("freesound-dir"), _("freesound"), _("folder"), _("folders"), _("directory"), _("directories"), _("download"),  NULL);
	VAR_META (X_("grid-follows-internal"), _("grid"), _("switch"), _("automatic"), _("tools"), _("mode"), _("selection"), _("internal"), _("edit"),  NULL);
	VAR_META (X_("hide-splash-screen"), _("appearance"), _("hide"), _("splash"), _("screen"),  NULL);
	VAR_META (X_("input-meter-layout"), _("meter"), _("recorder"), _("layout"),  NULL);
	VAR_META (X_("input-meter-scopes"), _("scopes"), _("recorder"), _("layout"),  NULL);
	VAR_META (X_("lock-gui-after-seconds"), _("lock"),  NULL);
	VAR_META (X_("max-inline-controls"), _("plugins"), _("mixer-strip"), _("controls"), _("inline"),  NULL);
	VAR_META (X_("max-plugin-chart"), _("plugins"), _("top"), _("favorite"), _("sidebar"),  NULL);
	VAR_META (X_("max-plugin-recent"), _("plugins"), _("recent"), _("favorite"), _("sidebar"),  NULL);
	VAR_META (X_("meter-hold"), _("metering"), _("standard"), _("hold"), _("falloff"), _("level"), _("dbfs"),  NULL);
	VAR_META (X_("meter-line-up-din"), _("metering"), _("standard"), _("din"), _("line-up"), _("level"), _("dbfs"),  NULL);
	VAR_META (X_("meter-line-up-level"), _("metering"), _("standard"), _("line-up"), _("level"), _("dbfs"),  NULL);
	VAR_META (X_("meter-peak"), _("metering"), _("peak"), _("line-up"), _("level"), _("dbfs"),  NULL);
	VAR_META (X_("meter-style-led"), _("metering"), _("style"), _("led"),  NULL);
	VAR_META (X_("meter-vu-standard"), _("metering"), _("standard"), _("vu"), _("line-up"), _("level"), _("dbfs"),  NULL);
	VAR_META (X_("mixer-element-visibility"), _("mixer"), _("visibility"), _("comment"), _("solo"), _("mute"), _("phase"), _("polarity"), _("invert"), _("rec"), _("solo"), _("locked"), _("vca"), _("trigger"),  NULL);
	VAR_META (X_("name-new-markers"), _("markers"), _("name"), _("dialog"), _("naming"),  NULL);
	VAR_META (X_("never-display-periodic-midi"), _("sysex"), _("mtc"), _("midi"), _("regions"), _("messages"), _("events"),  NULL);
	VAR_META (X_("new-automation-points-on-lane"), _("automation"), _("y-axis"), _("click"), _("draw"), _("lane"), _("points"),  NULL);
	VAR_META (X_("one-plugin-window-only"), _("plugins"), _("window"), _("single"), _("close"),  NULL);
	VAR_META (X_("only-copy-imported-files"), _("drag"), _("drop"), _("import"), _("copy"), _("link"), _("files"),  NULL);
	VAR_META (X_("open-gui-after-adding-plugin"), _("plugins"), _("gui"), _("open"), _("window"),  NULL);
	VAR_META (X_("plugin-gui-behavior"), _("plugins"), _("gui"), _("resources"), _("vst"), _("destroy"), _("window"),  NULL);
	VAR_META (X_("prefer-inline-over-gui"), _("plugins"), _("inline"), _("mixer"), _("strip"),  NULL);
	VAR_META (X_("rubberbanding-snaps-to-grid"), _("rubberband"), _("snap"), _("grid"), _("time"), _("stretch"),  NULL);
	VAR_META (X_("ruler-granularity"), _("ruler"), _("spacing"), _("grid"), _("snap"), _("distance"),  NULL);
	VAR_META (X_("rulers-follow-grid"), _("ruler"), _("grid"), _("auto"), _("show"), _("visibility"),  NULL);
	VAR_META (X_("save-export-analysis-image"), _("export"), _("analysis"), _("save"), _("image"),  NULL);
	VAR_META (X_("save-export-mixer-screenshot"), _("export"), _("save"), _("image"), _("mixer"), _("screenshot"),  NULL);
	VAR_META (X_("screen-saver-mode"), _("screensaver"), _("screen-saver"), _("prevent"), _("lock"),  NULL);
	VAR_META (X_("show-editor-meter"), _("toolbar"), _("editor"), _("meter"), _("master"),  NULL);
	VAR_META (X_("show-inline-display-by-default"), _("plugins"), _("inline"), _("controls"), _("mixer"),  NULL);
	VAR_META (X_("show-manager-if-plugins-are-missing"), _("plugins"), _("manager"), _("missing"),  NULL);
	VAR_META (X_("show-mini-timeline"), _("minitimeline"), _("mini"), _("timeline"), _("toolbar"),  NULL);
	VAR_META (X_("show-name-highlight"), _("editor"), _("region"), _("name"), _("bar"), _("highlight"), _("layout"),  NULL);
	VAR_META (X_("show-plugin-scan-window"), _("plugins"), _("popup"), _("progress"), _("scan"), _("indexing"),  NULL);
	VAR_META (X_("show-region-cue-markers"), _("cue"), _("markers"), _("regions"), _("editor"),  NULL);
	VAR_META (X_("show-region-gain"), _("regions"), _("gain"), _("envelope"), _("volume"), _("modes"),  NULL);
	VAR_META (X_("show-region-name"), _("regions"), _("name"), _("appearance"), _("editor"),  NULL);
	VAR_META (X_("show-region-xrun-markers"), _("regions"), _("xruns"), _("markers"), _("dropouts"),  NULL);
	VAR_META (X_("show-secondary-clock"), _("clock"), _("toolbar"), _("visibility"), _("secondary"),  NULL);
	VAR_META (X_("show-snapped-cursor"), _("cursor"), _("snap"), _("edit"), _("point"), _("line"),  NULL);
	VAR_META (X_("show-toolbar-cuectrl"), _("toolbar"), _("cue"),  NULL);
	VAR_META (X_("show-toolbar-latency"), _("toolbar"), _("latency"), _("information"),  NULL);
	VAR_META (X_("show-toolbar-monitor-info"), _("toolbar"), _("monitoring"), _("information"), _("section"),  NULL);
	VAR_META (X_("show-toolbar-monitoring"), _("toolbar"), _("monitoring"), _("information"), _("section"),  NULL);
	VAR_META (X_("show-toolbar-recpunch"), _("toolbar"), _("punch"), _("recording"), _("layered"), _("sound"), _("transparent"),  NULL);
	VAR_META (X_("show-toolbar-selclock"), _("toolbar"), _("clock"), _("selection"), _("time"), _("display"),  NULL);
	VAR_META (X_("show-track-meters"), _("editor"), _("meter"), _("small"), _("track"), _("header"),  NULL);
	VAR_META (X_("show-waveform-clipping"), _("waveform"), _("clipping"), _("red"), _("peak"),  NULL);
	VAR_META (X_("show-waveforms"), _("waveform"), _("display"), _("box"), _("empty"),  NULL);
	VAR_META (X_("show-waveforms-while-recording"), _("waveform"), _("display"), _("recording"),  NULL);
	VAR_META (X_("snap-threshold"), _("snap"), _("threshold"), _("distance"), _("mouse"),  NULL);
	VAR_META (X_("snap-to-grid"), _("snap"), _("grid"), _("editor"), _("mouse"),  NULL);
	VAR_META (X_("snap-to-marks"), _("snap"), _("grid"), _("editor"), _("mouse"), _("markers"), _("marks"),  NULL);
	VAR_META (X_("snap-to-region-end"), _("snap"), _("grid"), _("editor"), _("mouse"), _("regions"), _("boundaries"), _("boundary"),  NULL);
	VAR_META (X_("snap-to-region-start"), _("snap"), _("grid"), _("editor"), _("mouse"), _("regions"), _("boundaries"), _("boundary"),  NULL);
	VAR_META (X_("snap-to-region-sync"), _("snap"), _("grid"), _("editor"), _("mouse"), _("regions"), _("sync"),  NULL);
	VAR_META (X_("sound-midi-notes"), _("play"), _("notes"), _("selection"), _("midi"), _("sound"), _("hear"),  NULL);
	VAR_META (X_("super-rapid-clock-update"), _("clocks"), _("fast"), _("update"), _("display"), _("timecode"), _("video"), _("slow"), _("updates"),  NULL);
	VAR_META (X_("time-axis-name-ellipsize-mode"), _("editor"), _("width"), _("name"), _("track"), _("header"), _("ellipsize"), _("size"),  NULL);
	VAR_META (X_("timeline-item-gradient-depth"), _("editor"), _("gradient"), _("blur"), _("contrast"), _("style"),  NULL);
	VAR_META (X_("transients-follow-front"), _("KDE"), _("quirks"), _("dialogs"), _("window"), _("hidden"), _("behind"), _("transient"),  NULL);
	VAR_META (X_("update-editor-during-summary-drag"), _("editor"), _("summary"), _("scroll"), _("drag"), _("pan"), _("follow"),  NULL);
	VAR_META (X_("use-double-click-to-zoom-to-selection"), _("editor"), _("zoom"), _("selection"), _("mouse"), _("click"),  NULL);
	VAR_META (X_("use-mouse-position-as-zoom-focus-on-scroll"), _("editor"), _("zoom"), _("selection"), _("mouse"), _("wheel"), _("focus"), _("scroll"),  NULL);
	VAR_META (X_("use-note-bars-for-velocity"), _("midi"), _("velocity"), _("bars"), _("box"),  NULL);
	VAR_META (X_("use-note-color-for-velocity"), _("midi"), _("velocity"), _("color"),  NULL);
	VAR_META (X_("use-route-color-widely"), _("mixer"), _("colors"), _("faders"),  NULL);
	VAR_META (X_("use-time-rulers-to-zoom-with-vertical-drag"), _("zoom"), _("drag"), _("mouse"),  NULL);
	VAR_META (X_("use-tooltips"), _("tooltips"), _("help"), _("popup"), _("information"),  NULL);
	VAR_META (X_("use-wm-visibility"), _("quirks"), _("visibility"), _("switch"), _("windows"),  NULL);
	VAR_META (X_("vertical-region-gap"), _("visual"), _("gap"), _("tracks"), _("spacing"),  NULL);
	VAR_META (X_("vkeybd-layout"), _("virtual"), _("keyboard"), _("layout"), _("qwerty"), _("midi"),  NULL);
	VAR_META (X_("waveform-cache-size"), _("memory"), _("cache"), _("performance"), _("optimization"), _("image"),  NULL);
	VAR_META (X_("waveform-clip-level"), _("clip"), _("level"), _("dbfs"), _("waveform"), _("peaking"),  NULL);
	VAR_META (X_("waveform-gradient-depth"), _("editor"), _("gradient"), _("blur"), _("contrast"), _("style"), _("waveform"),  NULL);
	VAR_META (X_("waveform-scale"), _("waveform"), _("logarithmic"), _("logscale"), _("linear"),  NULL);
	VAR_META (X_("waveform-shape"), _("waveform"), _("rectified"), _("half"), _("shape"), _("display"),  NULL);
	VAR_META (X_("session-monitoring"), _("monitoring"), _("hearing"), _("listening"), _("signal"), _("monitors"),  NULL);
	VAR_META (X_("show-busses-on-meterbridge"), _("busses"), _("bus"), _("meterbridge"), _("meters"),  NULL);
	VAR_META (X_("show-fader-on-meterbridge"), _("faders"), _("meterbridge"),  NULL);
	VAR_META (X_("show-group-tabs"), _("group"),  NULL);
	VAR_META (X_("show-master-on-meterbridge"), _("master"), _("meterbridge"),  NULL);
	VAR_META (X_("show-midi-on-meterbridge"), _("midi"), _("meterbridge"),  NULL);
	VAR_META (X_("show-monitor-on-meterbridge"), _("monitor"), _("meterbridge"),  NULL);
	VAR_META (X_("show-mute-on-meterbridge"), _("mute"), _("meterbridge"),  NULL);
	VAR_META (X_("show-name-on-meterbridge"), _("solo"), _("meterbridge"),  NULL);
	VAR_META (X_("show-rec-on-meterbridge"), _("record"), _("recenable"), _("meterbridge"),  NULL);
	VAR_META (X_("show-region-fades"), _("region"), _("gain"), _("fades"), _("show"), _("hide"), _("fadein"), _("fadeout"),  NULL);
	VAR_META (X_("show-solo-on-meterbridge"), _("solo"), _("meterbridge"),  NULL);
	VAR_META (X_("show-summary"), _("summary"), _("show"),  NULL);
	VAR_META (X_("slave-timecode-offset"), _("timecode"), _("sync"), _("offset"),  NULL);
	VAR_META (X_("subframes-per-frame"), _("timecode"), _("subframes"), _("sync"),  NULL);
	VAR_META (X_("take-name"), _("take"), _("names"),  NULL);
	VAR_META (X_("timecode-format"), _("timecode"), _("sync"), _("format"), _("tc"),  NULL);
	VAR_META (X_("timecode-generator-offset"), _("timecode"), _("sync"), _("offset"), _("generate"), _("send"),  NULL);
	VAR_META (X_("timecode-offset"), _("timecode"), _("sync"), _("offset"), _("receive"),  NULL);
	VAR_META (X_("timecode-offset-negative"), _("timecode"), _("sync"), _("offset"), _("negative"),  NULL);
	VAR_META (X_("afl-position"), _("monitoring"), _("monitor"), _("afl"), _("pfl"), _("pre"), _("post"), _("position"),  NULL);
	VAR_META (X_("auto-analyse-audio"), _("automatic"), _("automated"), _("audio"), _("analysis"), _("transients"),  NULL);
	VAR_META (X_("click-sound"), _("metronome"), _("click"), _("beat"), _("sound"), _("sample"),  NULL);
	VAR_META (X_("clip-library-dir"), _("folder"), _("folders"), _("directory"), _("directories"), _("download"), _("clips"), _("library"),  NULL);
	VAR_META (X_("cpu-dma-latency"), _("cpu"), _("dma"), _("latency"), _("performance"), _("xrun"),  NULL);
	VAR_META (X_("create-xrun-marker"), _("xrun"), _("xmarker"),  NULL);
	VAR_META (X_("listen-position"), _("afl"), _("pfl"), _("listen"), _("monitoring"), _("position"),  NULL);
	VAR_META (X_("loop-is-mode"), _("looping"), _("mode"), _("behavior"),  NULL);
	VAR_META (X_("ltc-output-port"), _("timecode"), _("output"), _("port"), _("routing"),  NULL);
	VAR_META (X_("ltc-output-volume"), _("timecode"), _("output"), _("level"), _("gain"), _("volume"), _("ltc"),  NULL);
	VAR_META (X_("ltc-send-continuously"), _("timecode"), _("transmit"), _("send"), _("continuously"), _("always"), _("ltc"),  NULL);
	VAR_META (X_("ripple-mode"), _("ripple"), _("all"), _("interview"), _("selected"),  NULL);
	VAR_META (X_("solo-mute-override"), _("solo"), _("mute"), _("override"), _("overrule"), _("priority"),  NULL);
	VAR_META (X_("stop-at-session-end"), _("transport"), _("stop"), _("end"), _("session"),  NULL);
	VAR_META (X_("stop-recording-on-xrun"), _("transport"), _("recording"), _("xrun"), _("stop"),  NULL);
	VAR_META (X_("try-autostart-engine"), _("audioengine"), _("startup"),  NULL);
	VAR_META (X_("use-audio-units"), _("plugins"), _("audiounits"), _("audio-unit"), _("enable"), _("disable"),  NULL);
	VAR_META (X_("use-click-emphasis"), _("metronome"), _("beat"), _("click"), _("sound"), _("emphasis"),  NULL);
	VAR_META (X_("use-lxvst"), _("plugins"), _("vst2"), _("enable"), _("disable"),  NULL);
	VAR_META (X_("use-macvst"), _("plugins"), _("vst2"), _("enable"), _("disable"),  NULL);
	VAR_META (X_("use-monitor-bus"), _("monitoring"), _("bus"), _("optional"),  NULL);
	VAR_META (X_("use-osc"), _("osc"), _("open"), _("sound"), _("control"),  NULL);

}
