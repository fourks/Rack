#pragma once
#include "app.hpp"
#include "asset.hpp"


namespace rack {


////////////////////
// Colors
////////////////////

#define COLOR_BLACK_TRANSPARENT nvgRGBA(0x00, 0x00, 0x00, 0x00)
#define COLOR_BLACK nvgRGB(0x00, 0x00, 0x00)
#define COLOR_WHITE nvgRGB(0xff, 0xff, 0xff)
#define COLOR_RED nvgRGB(0xed, 0x2c, 0x24)
#define COLOR_ORANGE nvgRGB(0xf2, 0xb1, 0x20)
#define COLOR_YELLOW nvgRGB(0xf9, 0xdf, 0x1c)
#define COLOR_GREEN nvgRGB(0x90, 0xc7, 0x3e)
#define COLOR_CYAN nvgRGB(0x22, 0xe6, 0xef)
#define COLOR_BLUE nvgRGB(0x29, 0xb2, 0xef)
#define COLOR_PURPLE nvgRGB(0xd5, 0x2b, 0xed)

////////////////////
// Knobs
////////////////////

struct RoundKnob : SVGKnob {
	RoundKnob() {
		minAngle = -0.83*M_PI;
		maxAngle = 0.83*M_PI;
	}
};

struct RoundBlackKnob : RoundKnob {
	RoundBlackKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/RoundBlack.svg")));
		box.size = Vec(38, 38);
	}
};

struct RoundSmallBlackKnob : RoundBlackKnob {
	RoundSmallBlackKnob() {
		box.size = Vec(28, 28);
	}
};

struct RoundLargeBlackKnob : RoundBlackKnob {
	RoundLargeBlackKnob() {
		box.size = Vec(46, 46);
	}
};

struct RoundHugeBlackKnob : RoundBlackKnob {
	RoundHugeBlackKnob() {
		box.size = Vec(56, 56);
	}
};

struct RoundSmallBlackSnapKnob : RoundSmallBlackKnob {
	RoundSmallBlackSnapKnob() {
		snap = true;
	}
};


struct Davies1900hKnob : SVGKnob {
	Davies1900hKnob() {
		minAngle = -0.83*M_PI;
		maxAngle = 0.83*M_PI;
	}
};

struct Davies1900hWhiteKnob : Davies1900hKnob {
	Davies1900hWhiteKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hWhite.svg")));
	}
};

struct Davies1900hBlackKnob : Davies1900hKnob {
	Davies1900hBlackKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hBlack.svg")));
	}
};

struct Davies1900hRedKnob : Davies1900hKnob {
	Davies1900hRedKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hRed.svg")));
	}
};

struct Davies1900hLargeWhiteKnob : Davies1900hKnob {
	Davies1900hLargeWhiteKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hLargeWhite.svg")));
	}
};

struct Davies1900hLargeBlackKnob : Davies1900hKnob {
	Davies1900hLargeBlackKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hLargeBlack.svg")));
	}
};

struct Davies1900hLargeRedKnob : Davies1900hKnob {
	Davies1900hLargeRedKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hLargeRed.svg")));
	}
};

struct Davies1900hSmallBlackKnob : Davies1900hKnob {
	Davies1900hSmallBlackKnob() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Davies1900hSmallBlack.svg")));
	}
};

struct Davies1900hSmallBlackSnapKnob : Davies1900hSmallBlackKnob {
	Davies1900hSmallBlackSnapKnob() {
		snap = true;
	}
};


struct Rogan : SVGKnob {
	Rogan() {
		minAngle = -0.83*M_PI;
		maxAngle = 0.83*M_PI;
	}
};

struct Rogan6PS : Rogan {
	Rogan6PS() {
		box.size = Vec(89, 89);
		// minAngle = -0.83*M_PI;
		// maxAngle = 0.83*M_PI;
	}
};

struct Rogan5PS : Rogan {
	Rogan5PS() {
		box.size = Vec(60, 60);
	}
};

struct Rogan3PS : Rogan {
	Rogan3PS() {
		box.size = Vec(52, 52);
	}
};

struct Rogan3P : Rogan {
	Rogan3P() {
		box.size = Vec(42, 42);
	}
};

struct Rogan2S : Rogan {
	Rogan2S() {
		box.size = Vec(43, 43);
	}
};

struct Rogan2PS : Rogan {
	Rogan2PS() {
		box.size = Vec(43, 43);
	}
};

struct Rogan2P : Rogan {
	Rogan2P() {
		box.size = Vec(34, 34);
	}
};

struct Rogan1PS : Rogan {
	Rogan1PS() {
		box.size = Vec(40, 40);
	}
};

struct Rogan1P : Rogan {
	Rogan1P() {
		box.size = Vec(31, 31);
	}
};


struct Rogan6PSWhite : Rogan6PS {
	Rogan6PSWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan6PSWhite.svg")));
	}
};

struct Rogan5PSGray : Rogan5PS {
	Rogan5PSGray() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan5PSGray.svg")));
	}
};

struct Rogan3PSBlue : Rogan3PS {
	Rogan3PSBlue() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PSBlue.svg")));
	}
};

struct Rogan3PSRed : Rogan3PS {
	Rogan3PSRed() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PSRed.svg")));
	}
};

struct Rogan3PSGreen : Rogan3PS {
	Rogan3PSGreen() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PSGreen.svg")));
	}
};

struct Rogan3PSWhite : Rogan3PS {
	Rogan3PSWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PSWhite.svg")));
	}
};

struct Rogan3PBlue : Rogan3P {
	Rogan3PBlue() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PBlue.svg")));
	}
};

struct Rogan3PRed : Rogan3P {
	Rogan3PRed() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PRed.svg")));
	}
};

struct Rogan3PGreen : Rogan3P {
	Rogan3PGreen() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PGreen.svg")));
	}
};

struct Rogan3PWhite : Rogan3P {
	Rogan3PWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan3PWhite.svg")));
	}
};

struct Rogan2SGray : Rogan2S {
	Rogan2SGray() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2SGray.svg")));
	}
};

struct Rogan2PSBlue : Rogan2PS {
	Rogan2PSBlue() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PSBlue.svg")));
	}
};

struct Rogan2PSRed : Rogan2PS {
	Rogan2PSRed() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PSRed.svg")));
	}
};

struct Rogan2PSGreen : Rogan2PS {
	Rogan2PSGreen() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PSGreen.svg")));
	}
};

struct Rogan2PSWhite : Rogan2PS {
	Rogan2PSWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PSWhite.svg")));
	}
};

struct Rogan2PBlue : Rogan2P {
	Rogan2PBlue() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PBlue.svg")));
	}
};

struct Rogan2PRed : Rogan2P {
	Rogan2PRed() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PRed.svg")));
	}
};

struct Rogan2PGreen : Rogan2P {
	Rogan2PGreen() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PGreen.svg")));
	}
};

struct Rogan2PWhite : Rogan2P {
	Rogan2PWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan2PWhite.svg")));
	}
};

struct Rogan1PSBlue : Rogan1PS {
	Rogan1PSBlue() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PSBlue.svg")));
	}
};

struct Rogan1PSRed : Rogan1PS {
	Rogan1PSRed() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PSRed.svg")));
	}
};

struct Rogan1PSGreen : Rogan1PS {
	Rogan1PSGreen() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PSGreen.svg")));
	}
};

struct Rogan1PSWhite : Rogan1PS {
	Rogan1PSWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PSWhite.svg")));
	}
};

struct Rogan1PBlue : Rogan1P {
	Rogan1PBlue() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PBlue.svg")));
	}
};

struct Rogan1PRed : Rogan1P {
	Rogan1PRed() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PRed.svg")));
	}
};

struct Rogan1PGreen : Rogan1P {
	Rogan1PGreen() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PGreen.svg")));
	}
};

struct Rogan1PWhite : Rogan1P {
	Rogan1PWhite() {
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Rogan1PWhite.svg")));
	}
};


struct SynthTechAlco : SVGKnob {
	SynthTechAlco() {
		box.size = Vec(45, 45);
		minAngle = -0.82*M_PI;
		maxAngle = 0.82*M_PI;
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/SynthTechAlco.svg")));
	}
};

struct Trimpot : SVGKnob {
	Trimpot() {
		box.size = Vec(17, 17);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/Trimpot.svg")));
	}
};

struct BefacoBigKnob : SVGKnob {
	BefacoBigKnob() {
		box.size = Vec(75, 75);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/BefacoBigKnob.svg")));
	}
};

struct BefacoBigSnapKnob : BefacoBigKnob {
	BefacoBigSnapKnob() {
		snap = true;
	}
};

struct BefacoTinyKnob : SVGKnob {
	BefacoTinyKnob() {
		box.size = Vec(26, 26);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetGlobal("res/ComponentLibrary/BefacoTinyKnob.svg")));
	}
};

struct BefacoSlidePot : SVGSlider {
	BefacoSlidePot() {
		Vec margin = Vec(3.5, 3.5);
		maxHandlePos = Vec(-1, -2).plus(margin);
		minHandlePos = Vec(-1, 87).plus(margin);
		background->svg = SVG::load(assetGlobal("res/ComponentLibrary/BefacoSlidePot.svg"));
		background->wrap();
		background->box.pos = margin;
		box.size = background->box.size.plus(margin.mult(2));
		handle->svg = SVG::load(assetGlobal("res/ComponentLibrary/BefacoSlidePotHandle.svg"));
		handle->wrap();
	}
};

////////////////////
// Jacks
////////////////////

struct PJ301MPort : SVGPort {
	PJ301MPort() {
		background->svg = SVG::load(assetGlobal("res/ComponentLibrary/PJ301M.svg"));
		background->wrap();
		box.size = background->box.size;
	}
};

struct PJ3410Port : SVGPort {
	PJ3410Port() {
		background->svg = SVG::load(assetGlobal("res/ComponentLibrary/PJ3410.svg"));
		background->wrap();
		box.size = background->box.size;
	}
};

struct CL1362Port : SVGPort {
	CL1362Port() {
		background->svg = SVG::load(assetGlobal("res/ComponentLibrary/CL1362.svg"));
		background->wrap();
		box.size = background->box.size;
	}
};

////////////////////
// LEDs
////////////////////

struct ValueLight : Light {
	float *value = NULL;
	virtual void setValue(float v) {}
	void step() override {
		if (value)
			setValue(*value);
	}
};

struct ColorValueLight : ValueLight {
	NVGcolor baseColor;
	void setValue(float v) override {
		v = sqrtBipolar(v);
		color = baseColor;
		color.a *= clampf(v, 0.0, 1.0);
	}
};

struct RedValueLight : ColorValueLight {
	RedValueLight() {
		baseColor = COLOR_RED;
	}
};

struct YellowValueLight : ColorValueLight {
	YellowValueLight() {
		baseColor = COLOR_YELLOW;
	}
};

struct GreenValueLight : ColorValueLight {
	GreenValueLight() {
		baseColor = COLOR_GREEN;
	}
};

struct PolarityLight : ValueLight {
	NVGcolor posColor;
	NVGcolor negColor;
	void setValue(float v) override {
		v = sqrtBipolar(v);
		color = (v >= 0.0) ? posColor : negColor;
		color.a *= clampf(fabsf(v), 0.0, 1.0);
	}
};

struct GreenRedPolarityLight : PolarityLight {
	GreenRedPolarityLight() {
		posColor = COLOR_GREEN;
		negColor = COLOR_RED;
	}
};

struct ModeValueLight : ValueLight {
	std::vector<NVGcolor> colors;
	void setValue(float v) override {
		int mode = clampi((int)roundf(v), 0, colors.size());
		color = colors[mode];
	}
	void addColor(NVGcolor color) {
		colors.push_back(color);
	}
};

template <typename BASE>
struct LargeLight : BASE {
	LargeLight() {
		this->box.size = Vec(20, 20);
	}
};

template <typename BASE>
struct MediumLight : BASE {
	MediumLight() {
		this->box.size = Vec(12, 12);
	}
};

template <typename BASE>
struct SmallLight : BASE {
	SmallLight() {
		this->box.size = Vec(8, 8);
	}
};

template <typename BASE>
struct TinyLight : BASE {
	TinyLight() {
		this->box.size = Vec(5, 5);
	}
};

////////////////////
// Switches and Buttons
////////////////////

struct NKK : SVGSwitch, ToggleSwitch {
	NKK() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/NKK_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/NKK_1.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/NKK_2.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct CKSS : SVGSwitch, ToggleSwitch {
	CKSS() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/CKSS_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/CKSS_1.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct CKD6 : SVGSwitch, MomentarySwitch {
	CKD6() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/CKD6_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/CKD6_1.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct TL1105 : SVGSwitch, MomentarySwitch {
	TL1105() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/TL1105_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/TL1105_1.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct LEDButton : SVGSwitch, MomentarySwitch {
	LEDButton() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/LEDButton.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct BefacoSwitch : SVGSwitch, ToggleSwitch {
	BefacoSwitch() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/BefacoSwitch_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/BefacoSwitch_1.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/BefacoSwitch_2.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct BefacoPush : SVGSwitch, MomentarySwitch {
	BefacoPush() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/BefacoPush_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/BefacoPush_1.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct PB61303 : SVGSwitch, MomentarySwitch {
	PB61303() {
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/PB61303_0.svg")));
		addFrame(SVG::load(assetGlobal("res/ComponentLibrary/PB61303_1.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};


////////////////////
// Misc
////////////////////

struct ScrewSilver : SVGScrew {
	ScrewSilver() {
		sw->svg = SVG::load(assetGlobal("res/ComponentLibrary/ScrewSilver.svg"));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct ScrewBlack : SVGScrew {
	ScrewBlack() {
		sw->svg = SVG::load(assetGlobal("res/ComponentLibrary/ScrewBlack.svg"));
		sw->wrap();
		box.size = sw->box.size;
	}
};

struct LightPanel : Panel {
	LightPanel() {
		backgroundColor = nvgRGB(0xe6, 0xe6, 0xe6);
	}
};

struct DarkPanel : Panel {
	DarkPanel() {
		backgroundColor = nvgRGB(0x17, 0x17, 0x17);
	}
};


} // namespace rack
