#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C
class UBP_Interactable_Interact_BedSetSpawn_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_BedBase_C*                         Bed;                                               // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_BedSetSpawn_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, bool CallFunc_IsShelteredInteractable_IsShelteredInteractable, bool CallFunc_HasPlayerUID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Interact_BedSetSpawn(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_BedBase_C* K2Node_DynamicCast_AsBP_Bed_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String);
};

}


