// WidgetBlueprintGeneratedClass UW-FreeTicket.UW-FreeTicket_C
// Size: 0x2cff6ab2 (Inherited: 0x2cff6a88)
struct UUW-FreeTicket_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UTextBlock* TextBlock; // 0x298(0x08)
	struct UTextBlock* TextBlock; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2a8(0x08)
	enum class ETicketType Type; // 0x2b0(0x01)
	bool ShowCount; // 0x2b1(0x01)

	void PreConstruct(bool IsDesignTime); // Function UW-FreeTicket.UW-FreeTicket_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-FreeTicket.UW-FreeTicket_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetCount(int32_t Count); // Function UW-FreeTicket.UW-FreeTicket_C.SetCount // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-FreeTicket.UW-FreeTicket_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-FreeTicket.UW-FreeTicket_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckImage(); // Function UW-FreeTicket.UW-FreeTicket_C.CheckImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-FreeTicket(int32_t EntryPoint); // Function UW-FreeTicket.UW-FreeTicket_C.ExecuteUbergraph_UW-FreeTicket // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

