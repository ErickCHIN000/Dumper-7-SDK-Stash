#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x319 - 0x2DD)
// BlueprintGeneratedClass ba_InteractableCustom_00.ba_InteractableCustom_00_C
class Aba_InteractableCustom_00_C : public Aba_ia_BaseInteractableObject_01_C
{
public:
	uint8                                        Pad_71C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InteractionDistance;                               // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_726[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LevelBlueprintFunctionName;                        // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInteractionWith;                                 // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OneUse;                                            // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_InteractableCustom_00_C* GetDefaultObj();

	void InteractionOut();
	float MaxInteractionDistance();
	void SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue);
	void UserConstructionScript();
	void OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void InternalOnInteractionLockedStateChanged();
	void ExecuteUbergraph_ba_InteractableCustom_00(int32 EntryPoint, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnInteractionWith__DelegateSignature();
};

}


