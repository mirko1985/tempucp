if (typeof kotlin === 'undefined') {
  throw new Error("Error loading module 'UCPlayer_js'. Its dependency 'kotlin' was not found. Please, check whether 'kotlin' is loaded prior to 'UCPlayer_js'.");
}
var UCPlayer_js = function (_, Kotlin) {
  'use strict';
  var Kind_CLASS = Kotlin.Kind.CLASS;
  var println = Kotlin.kotlin.io.println_s8jyv4$;
  function RandomString() {
    this.text = null;
  }
  RandomString.prototype.randomString = function () {
    return '(' + this.text + ')' + (300).toString();
  };
  RandomString.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'RandomString',
    interfaces: []
  };
  function RandomString_init(text, $this) {
    $this = $this || Object.create(RandomString.prototype);
    RandomString.call($this);
    $this.text = text;
    return $this;
  }
  function main(args) {
    var test = RandomString_init('KotlinMainTest');
    println(test.randomString());
  }
  var package$uc = _.uc || (_.uc = {});
  var package$player = package$uc.player || (package$uc.player = {});
  var package$common = package$player.common || (package$player.common = {});
  package$common.RandomString_init_61zpoe$ = RandomString_init;
  package$common.RandomString = RandomString;
  package$common.main_kand9s$ = main;
  main([]);
  Kotlin.defineModule('UCPlayer_js', _);
  return _;
}(typeof UCPlayer_js === 'undefined' ? {} : UCPlayer_js, kotlin);
