#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x158 - 0xF8)
// BlueprintGeneratedClass BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C
class UBP_FirstTimePlayerSetupComponent_C : public UFirstTimePlayerSetupComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         InitialItemsGranted;                               // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadoutDataReference           FallbackLoadout;                                   // 0x108(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           DEBUG_LastGrantedLoadoutHandle;                    // 0x130(0x28)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FirstTimePlayerSetupComponent_C* GetDefaultObj();

	void GetInitialItemsGranted(bool* ItemsGranted);
	void GrantStartingLoadout(const struct FPlayerLoadoutDataReference& StartingLoadout, const struct FPlayerLoadout& CallFunc_TryGetPlayerLoadoutData_OutLoadoutData, enum class EGetResult CallFunc_TryGetPlayerLoadoutData_OutBranches, const struct FPlayerLoadoutDataReference& CallFunc_GetStartingLoadout_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	struct FPlayerLoadoutDataReference GetStartingLoadout(const struct FPlayerLoadoutDataReference& ServerSlamLoadout, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FPlayerLoadoutDataReference& CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout);
	void DEBUG_SetLastGrantedLoadout(const struct FPlayerLoadoutDataReference& NewLoadout);
	void DEBUG_GetLastGrantedLoadout(struct FPlayerLoadoutDataReference* ActiveLoadout);
	void SetupLoadout();
	void SetupLoadout_InventoryReady(bool Success);
	void SetupLoadout_PawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FirstTimePlayerSetupComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Success, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class APawn* K2Node_CustomEvent_OldPawn, class APawn* K2Node_CustomEvent_NewPawn, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, class AActor* CallFunc_GetOwner_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AController* K2Node_DynamicCast_AsController_1, bool K2Node_DynamicCast_bSuccess_2, const struct FPlayerLoadoutDataReference& CallFunc_GetStartingLoadout_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue);
};

}


