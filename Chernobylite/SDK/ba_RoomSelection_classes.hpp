#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F (0x378 - 0x319)
// BlueprintGeneratedClass ba_RoomSelection.ba_RoomSelection_C
class Aba_RoomSelection_C : public Aba_InteractableCustom_00_C
{
public:
	uint8                                        Pad_381[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_RoomSelection_C*                  Widget;                                            // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class Aba_Room_Controller_C*                 ActorToCallMethodsOn;                              // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_Room_base_C*                       Selected_Room;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DisabledRoomsIndices;                              // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<struct FSt_RoomInfo>                  RoomInfos;                                         // 0x368(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class Aba_RoomSelection_C* GetDefaultObj();

	void FindWidgetControllers(class FName RoomName, TArray<class Abp_RoomWidgetController_C*>* WidgetControllers, const TArray<class Abp_RoomWidgetController_C*>& LocalWidgetControllers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class Abp_RoomWidgetController_C*>& K2Node_MakeArray_Array, const struct FSt_RoomInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void InitWidget(int32 ID, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void InpActEvt_Enter_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void Finish();
	void InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0(float AxisValue);
	void Internal_DelegateCallSelected(class FName Param);
	void TurnOnRoomSelecrion(class Aba_Room_Controller_C* Room_Controller);
	void SetRoomEnabled(class FName RoomID, bool NewEnabled);
	void ReceiveBeginPlay();
	void CreateWidget();
	void ExecuteUbergraph_ba_RoomSelection(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FKey& K2Node_InputKeyEvent_Key_1, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FKey& K2Node_InputKeyEvent_Key_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputKeyEvent_Key_5, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_RoomSelection_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_Param, bool Temp_bool_IsClosed_Variable, TArray<class Abp_RoomWidgetController_C*>& CallFunc_FindWidgetControllers_WidgetControllers, int32 CallFunc_GetIndexForRoom_Index, class Aba_Room_Controller_C* K2Node_CustomEvent_Room_Controller, class UWid_RoomSelectionOption_C* CallFunc_GetRoom_SelectionOption, bool Temp_bool_Has_Been_Initd_Variable_1, class FName K2Node_CustomEvent_RoomID, bool K2Node_CustomEvent_NewEnabled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetIndexForRoom_Index_1, class UWid_RoomSelectionOption_C* CallFunc_GetRoom_SelectionOption_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWid_RoomSelection_C* CallFunc_Create_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void Selected__DelegateSignature(class FName RoomID);
};

}


