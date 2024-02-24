#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x330 - 0x319)
// BlueprintGeneratedClass bp_RoomWidgetController.bp_RoomWidgetController_C
class Abp_RoomWidgetController_C : public Aba_InteractableCustom_00_C
{
public:
	uint8                                        Pad_13E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Aba_RoomUpgrades_C*                    Upgrades;                                          // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_RoomWidgetController_C* GetDefaultObj();

	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void ExecuteUbergraph_bp_RoomWidgetController(int32 EntryPoint, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit);
};

}


