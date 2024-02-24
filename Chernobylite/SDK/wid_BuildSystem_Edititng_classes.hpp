#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x358 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_Edititng.wid_BuildSystem_Edititng_C
class UWid_BuildSystem_Edititng_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                              Bar;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_BuildSystem_Desc_C*               Desc;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_BuildSystem_GlobalStatistics_C*   GlobalStatistics;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Progres;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_BuildSystem_Buttons_Keyboard_RotationMode_C* Wid_BuildSystem_Buttons_Keyboard_RotationMode;     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_BuildSystem_Editing_Buttons_C*    Wid_BuildSystem_Editing_Buttons;                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_BuildSystem_Editing_Scrap_C*      Wid_BuildSystem_Editing_Scrap;                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           Wid_RoomSkillTreeConfirm_58;                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  BuildID;                                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HoldingMesh;                                       // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsActive;                                          // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EAE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseBuildSystemEntity*                LiftedEntity;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_BuildSystem_C*                     Owner;                                             // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GetMaxItems;                                       // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ShowCatalogs;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MoveLeftCatalogs;                                  // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MoveRightCatalogs;                                 // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MoveUpCatalogs;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MoveDownCatalogs;                                  // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ItemScrap;                                         // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_BuildSystem_Main_C*               Main;                                              // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PopupVisible;                                      // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPrevIsCursorVisible;                              // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DelayerdScrapStarted;                              // 0x352(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EFE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScrapSpeed;                                        // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_Edititng_C* GetDefaultObj();

	void UpdateGlobalStats(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void CheckIfIsNonEmptyStorage(bool* Found1, bool Found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class Aba_Storage_Controller_C* K2Node_DynamicCast_AsBa_Storage_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void ClearOutlines(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABaseBuildSystemEntity*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABaseBuildSystemEntity* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Finish(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABaseBuildSystemEntity*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABaseBuildSystemEntity* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PutEntityInGivenPlace(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_CanBePlaced_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void PickBuildEntity(class ABaseBuildSystemEntity* PotentialPickUpEntity, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetBuildID_ReturnValue, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue);
	void InputL1();
	void InputR1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Show();
	void Hide();
	void InputFaceRight();
	void InputFaceDown();
	void InputFaceUp();
	void InputFaceLeft();
	void InputDPadLeft();
	void InputDPadRight();
	void InputDPadUp();
	void InputDPadDown();
	void Destruct();
	void Construct();
	void ScrapEntityDelayed();
	void StopDelayedScrap();
	void DelayedScrap();
	void ExecuteUbergraph_wid_BuildSystem_Edititng(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_14, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Variable_7, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FBuildEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName CallFunc_GetCurrentBuildID_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_IsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_15, bool CallFunc_Not_PreBool_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, bool Temp_bool_Variable_8, enum class ESlateVisibility K2Node_Select_Default_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class FName CallFunc_GetCurrentBuildID_ReturnValue_1, bool CallFunc_GetIsInItems_IsInItems, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_IsValid_ReturnValue_3, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, enum class ESlateVisibility Temp_byte_Variable_16, bool CallFunc_CheckIfIsNonEmptyStorage_Found1, enum class ESlateVisibility Temp_byte_Variable_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_7, bool CallFunc_BooleanAND_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1);
	void ItemScrap__DelegateSignature();
	void MoveDownCatalogs__DelegateSignature();
	void MoveUpCatalogs__DelegateSignature();
	void MoveRightCatalogs__DelegateSignature();
	void MoveLeftCatalogs__DelegateSignature();
	void ShowCatalogs__DelegateSignature(bool Show);
	void GoBack__DelegateSignature();
};

}


