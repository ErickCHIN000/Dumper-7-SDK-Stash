#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x750 - 0x740)
// BlueprintGeneratedClass BP_EchoLogPickup.BP_EchoLogPickup_C
class ABP_EchoLogPickup_C : public ABP_OakInventoryItemPickup_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x740(0x8)(Transient, DuplicateTransient)
	class UOakMissionIconComponent*              OakMissionIcon;                                    // 0x748(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EchoLogPickup_C* GetDefaultObj();

	void UserConstructionScript();
	void OnPickedUpEvent(class AActor* WasPickedUpBy);
	void ExecuteUbergraph_BP_EchoLogPickup(int32 EntryPoint, class AActor* K2Node_Event_WasPickedUpBy, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AOakCharacter_Overworld* K2Node_DynamicCast_AsOak_Character_Overworld, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue);
};

}


