#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_RoomSelection.ba_RoomSelection_C
// (Actor)

class UClass* Aba_RoomSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_RoomSelection_C");

	return Clss;
}


// ba_RoomSelection_C ba_RoomSelection.Default__ba_RoomSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_RoomSelection_C* Aba_RoomSelection_C::GetDefaultObj()
{
	static class Aba_RoomSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_RoomSelection_C*>(Aba_RoomSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_RoomSelection.ba_RoomSelection_C.FindWidgetControllers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RoomName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_RoomWidgetController_C*>WidgetControllers                                                (Parm, OutParm)
// TArray<class Abp_RoomWidgetController_C*>LocalWidgetControllers                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_RoomWidgetController_C*>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FSt_RoomInfo                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_RoomSelection_C::FindWidgetControllers(class FName RoomName, TArray<class Abp_RoomWidgetController_C*>* WidgetControllers, const TArray<class Abp_RoomWidgetController_C*>& LocalWidgetControllers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class Abp_RoomWidgetController_C*>& K2Node_MakeArray_Array, const struct FSt_RoomInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "FindWidgetControllers");

	Params::Aba_RoomSelection_C_FindWidgetControllers_Params Parms{};

	Parms.RoomName = RoomName;
	Parms.LocalWidgetControllers = LocalWidgetControllers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetControllers != nullptr)
		*WidgetControllers = std::move(Parms.WidgetControllers);

}


// Function ba_RoomSelection.ba_RoomSelection_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_RoomSelection_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "GetObjectsToSave");

	Params::Aba_RoomSelection_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomSelection.ba_RoomSelection_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_RoomSelection_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "HasObjectsToSave");

	Params::Aba_RoomSelection_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomSelection.ba_RoomSelection_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_RoomSelection_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_RoomSelection_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomSelection.ba_RoomSelection_C.InitWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSelectionOption_C*  K2Node_DynamicCast_AsWid_Room_Selection_Option                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_RoomSelection_C::InitWidget(int32 ID, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InitWidget");

	Params::Aba_RoomSelection_C_InitWidget_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Room_Selection_Option = K2Node_DynamicCast_AsWid_Room_Selection_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_Enter_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_Enter_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_Enter_K2Node_InputKeyEvent_6");

	Params::Aba_RoomSelection_C_InpActEvt_Enter_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_BackSpace_K2Node_InputKeyEvent_5");

	Params::Aba_RoomSelection_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4");

	Params::Aba_RoomSelection_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3");

	Params::Aba_RoomSelection_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2");

	Params::Aba_RoomSelection_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1");

	Params::Aba_RoomSelection_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpActEvt_F_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpActEvt_F_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpActEvt_F_K2Node_InputKeyEvent_0");

	Params::Aba_RoomSelection_C_InpActEvt_F_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomSelection_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "OnInteractionPressedComponent");

	Params::Aba_RoomSelection_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.Finish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_RoomSelection_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomSelection.ba_RoomSelection_C.InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomSelection_C::InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0");

	Params::Aba_RoomSelection_C_InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.Internal_DelegateCallSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomSelection_C::Internal_DelegateCallSelected(class FName Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "Internal_DelegateCallSelected");

	Params::Aba_RoomSelection_C_Internal_DelegateCallSelected_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.TurnOnRoomSelecrion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_Room_Controller_C*       Room_Controller                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomSelection_C::TurnOnRoomSelecrion(class Aba_Room_Controller_C* Room_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "TurnOnRoomSelecrion");

	Params::Aba_RoomSelection_C_TurnOnRoomSelecrion_Params Parms{};

	Parms.Room_Controller = Room_Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.SetRoomEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RoomID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_RoomSelection_C::SetRoomEnabled(class FName RoomID, bool NewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "SetRoomEnabled");

	Params::Aba_RoomSelection_C_SetRoomEnabled_Params Parms{};

	Parms.RoomID = RoomID;
	Parms.NewEnabled = NewEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_RoomSelection_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomSelection.ba_RoomSelection_C.CreateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_RoomSelection_C::CreateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "CreateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomSelection.ba_RoomSelection_C.ExecuteUbergraph_ba_RoomSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSelection_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Param                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class Abp_RoomWidgetController_C*>CallFunc_FindWidgetControllers_WidgetControllers                 (ReferenceParm)
// int32                              CallFunc_GetIndexForRoom_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_Room_Controller_C*       K2Node_CustomEvent_Room_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSelectionOption_C*  CallFunc_GetRoom_SelectionOption                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_RoomID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewEnabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIndexForRoom_Index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSelectionOption_C*  CallFunc_GetRoom_SelectionOption_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSelection_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_RoomSelection_C::ExecuteUbergraph_ba_RoomSelection(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FKey& K2Node_InputKeyEvent_Key_1, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FKey& K2Node_InputKeyEvent_Key_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputKeyEvent_Key_5, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_RoomSelection_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_Param, bool Temp_bool_IsClosed_Variable, TArray<class Abp_RoomWidgetController_C*>& CallFunc_FindWidgetControllers_WidgetControllers, int32 CallFunc_GetIndexForRoom_Index, class Aba_Room_Controller_C* K2Node_CustomEvent_Room_Controller, class UWid_RoomSelectionOption_C* CallFunc_GetRoom_SelectionOption, bool Temp_bool_Has_Been_Initd_Variable_1, class FName K2Node_CustomEvent_RoomID, bool K2Node_CustomEvent_NewEnabled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetIndexForRoom_Index_1, class UWid_RoomSelectionOption_C* CallFunc_GetRoom_SelectionOption_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWid_RoomSelection_C* CallFunc_Create_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, bool CallFunc_RemoveChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "ExecuteUbergraph_ba_RoomSelection");

	Params::Aba_RoomSelection_C_ExecuteUbergraph_ba_RoomSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Param = K2Node_CustomEvent_Param;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_FindWidgetControllers_WidgetControllers = CallFunc_FindWidgetControllers_WidgetControllers;
	Parms.CallFunc_GetIndexForRoom_Index = CallFunc_GetIndexForRoom_Index;
	Parms.K2Node_CustomEvent_Room_Controller = K2Node_CustomEvent_Room_Controller;
	Parms.CallFunc_GetRoom_SelectionOption = CallFunc_GetRoom_SelectionOption;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_RoomID = K2Node_CustomEvent_RoomID;
	Parms.K2Node_CustomEvent_NewEnabled = K2Node_CustomEvent_NewEnabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIndexForRoom_Index_1 = CallFunc_GetIndexForRoom_Index_1;
	Parms.CallFunc_GetRoom_SelectionOption_1 = CallFunc_GetRoom_SelectionOption_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomSelection.ba_RoomSelection_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RoomID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomSelection_C::Selected__DelegateSignature(class FName RoomID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomSelection_C", "Selected__DelegateSignature");

	Params::Aba_RoomSelection_C_Selected__DelegateSignature_Params Parms{};

	Parms.RoomID = RoomID;

	UObject::ProcessEvent(Func, &Parms);

}

}


