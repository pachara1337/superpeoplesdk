// BlueprintGeneratedClass Line_WidgetActor.Line_WidgetActor_C
// Size: 0x2cff6b20 (Inherited: 0x2cff6b08)
struct ALine_WidgetActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetComponent* Widget1; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)

	void SetLine(bool Show, int32_t IconIndex); // Function Line_WidgetActor.Line_WidgetActor_C.SetLine // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetScale(float Scale); // Function Line_WidgetActor.Line_WidgetActor_C.SetScale // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_Line_WidgetActor(int32_t EntryPoint); // Function Line_WidgetActor.Line_WidgetActor_C.ExecuteUbergraph_Line_WidgetActor // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

