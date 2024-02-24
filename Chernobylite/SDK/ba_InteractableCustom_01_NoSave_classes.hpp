#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x77 (0x348 - 0x2D1)
// BlueprintGeneratedClass ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C
class Aba_InteractableCustom_01_NoSave_C : public Aba_ia_BaseInteractableObject_01_nosave_C
{
public:
	uint8                                        Pad_29A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InteractionDistance;                               // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_29B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LevelBlueprintFunctionName;                        // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInteractionWith;                                 // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OneUse;                                            // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InteractionHasHappend;                             // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusGain;                                       // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusLost;                                       // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Aba_InteractableCustom_01_NoSave_C* GetDefaultObj();

	void PowerOn();
	void PowerOff();
	void InteractionOut();
	float MaxInteractionDistance();
	void SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void InternalOnInteractionLockedStateChanged();
	void OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerNearFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ba_InteractableCustom_01_NoSave(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class AMainPawnCpp* K2Node_Event_PlayerPawn_3, class UActorComponent* K2Node_Event_ComponentHit_3, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, bool CallFunc_CallFunctionOnLevelActor_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, bool CallFunc_IsInteractionUnlocked_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void OnFocusLost__DelegateSignature();
	void OnFocusGain__DelegateSignature();
	void InteractionHasHappend__DelegateSignature();
	void OnInteractionWith__DelegateSignature();
};

}


