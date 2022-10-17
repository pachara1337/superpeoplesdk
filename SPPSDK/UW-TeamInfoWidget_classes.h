// WidgetBlueprintGeneratedClass UW-TeamInfoWidget.UW-TeamInfoWidget_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a98)
struct UUW-TeamInfoWidget_C : UBravoHotelTeamInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UUW-TeamInfoItemWidget_C* UW-TeamInfoItemWidget; // 0x2a0(0x08)
	struct UUW-TeamInfoItemWidget_C* UW-TeamInfoItemWidget_C; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_InfoList; // 0x2b0(0x08)

	struct UBravoHotelTeamInfoSlotWidget* CreateSlot(); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.CreateSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TeamInfoWidget(int32_t EntryPoint); // Function UW-TeamInfoWidget.UW-TeamInfoWidget_C.ExecuteUbergraph_UW-TeamInfoWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

