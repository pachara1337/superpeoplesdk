// UserDefinedStruct AdvancedEffectFeatures.AdvancedEffectFeatures
// Size: 0x2cff6934 (Inherited: 0x00)
struct FAdvancedEffectFeatures {
	enum class BlendModes BlendMode_12_09737E6C44063CBE16D45A8896564C06; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture2D* BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5; // 0x08(0x08)
	struct FVector2DN BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0; // 0x10(0x08)
	float BlendDistance_33_7594D9DD4D782916B58945895B32667E; // 0x18(0x04)
	float BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D; // 0x1c(0x04)
	bool BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B; // 0x24(0x04)
	int32_t EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F; // 0x28(0x04)
	bool CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8; // 0x2c(0x01)
	bool StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	int32_t StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1; // 0x30(0x04)
	char pad_34[0x2cff6900]; // 0x34(0x2cff6900)
};

