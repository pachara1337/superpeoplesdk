// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FTemplateSequenceBindingOverrideData {
	struct TWeakObjectPtr<struct UObject> Object; // 0x00(0x08)
	bool bOverridesDefault; // 0x08(0x01)
	char pad_9[0x2cff6a03]; // 0x09(0x2cff6a03)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// Size: 0x2cffea20 (Inherited: 0x2cffd908)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	struct FMovieSceneEvaluationOperand Operand; // 0x08(0x14)
	char pad_2CFFD91C[0x1104]; // 0x2cffd91c(0x1104)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// Size: 0x2cff6948 (Inherited: 0x2cffea20)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FFrameNumber SectionStartTime; // 0x20(0x04)
	struct FGuid OuterBindingId; // 0x24(0x10)
	struct FMovieSceneEvaluationOperand InnerOperand; // 0x34(0x14)
};

