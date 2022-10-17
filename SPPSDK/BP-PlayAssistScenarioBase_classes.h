// BlueprintGeneratedClass BP-PlayAssistScenarioBase.BP-PlayAssistScenarioBase_C
// Size: 0x2cff6a70 (Inherited: 0x2cff6a60)
struct UBP-PlayAssistScenarioBase_C : UBravoHotelScenarioBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x60(0x08)
	float LimitTime; // 0x68(0x04)
	float LimitTimer; // 0x6c(0x04)

	void K2_TickScenario(float DeltaTime); // Function BP-PlayAssistScenarioBase.BP-PlayAssistScenarioBase_C.K2_TickScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenarioBase.BP-PlayAssistScenarioBase_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenarioBase(int32_t EntryPoint); // Function BP-PlayAssistScenarioBase.BP-PlayAssistScenarioBase_C.ExecuteUbergraph_BP-PlayAssistScenarioBase // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

