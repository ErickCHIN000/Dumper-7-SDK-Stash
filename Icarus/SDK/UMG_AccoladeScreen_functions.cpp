#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AccoladeScreen.UMG_AccoladeScreen_C
// (None)

class UClass* UUMG_AccoladeScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AccoladeScreen_C");

	return Clss;
}


// UMG_AccoladeScreen_C UMG_AccoladeScreen.Default__UMG_AccoladeScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AccoladeScreen_C* UUMG_AccoladeScreen_C::GetDefaultObj()
{
	static class UUMG_AccoladeScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AccoladeScreen_C*>(UUMG_AccoladeScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.InitAccoladeLists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAccoladesRowHandle> Array                                                            (Edit, BlueprintVisible)
// TMap<struct FPlayerAccoladeCategoriesEnum, struct FFAccoladeArrayStruct>AccoladeMap                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccoladesEnum              CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccoladesRowHandle         CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FAccoladeData               CallFunc_GetAccoladesStruct_Accolades                            (None)
// enum class EValid                  CallFunc_GetAccoladesStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_AccoladeList_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFAccoladeArrayStruct       K2Node_MakeStruct_FAccoladeArrayStruct                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerAccoladeCategoriesEnumCallFunc_IntToStruct_ReturnValue_1                               (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerAccoladeCategoriesRowHandleCallFunc_StructToRowHandle_ReturnValue_1                         (NoDestructor, HasGetValueTypeHash)
// struct FPlayerAccoladeCategoriesEnumCallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FFAccoladeArrayStruct       CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFAccoladeArrayStruct       CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeScreen_C::InitAccoladeLists(const TArray<struct FAccoladesRowHandle>& Array, TMap<struct FPlayerAccoladeCategoriesEnum, struct FFAccoladeArrayStruct> AccoladeMap, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FAccoladesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAccoladesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_AccoladeList_C* CallFunc_Create_ReturnValue, const struct FFAccoladeArrayStruct& K2Node_MakeStruct_FAccoladeArrayStruct, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FPlayerAccoladeCategoriesEnum& CallFunc_IntToStruct_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPlayerAccoladeCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, const struct FPlayerAccoladeCategoriesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FFAccoladeArrayStruct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFAccoladeArrayStruct& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_NumRows_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "InitAccoladeLists");

	Params::UUMG_AccoladeScreen_C_InitAccoladeLists_Params Parms{};

	Parms.Array = Array;
	Parms.AccoladeMap = AccoladeMap;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetAccoladesStruct_Accolades = CallFunc_GetAccoladesStruct_Accolades;
	Parms.CallFunc_GetAccoladesStruct_Paths = CallFunc_GetAccoladesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_FAccoladeArrayStruct = K2Node_MakeStruct_FAccoladeArrayStruct;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_IntToStruct_ReturnValue_1 = CallFunc_IntToStruct_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_StructToRowHandle_ReturnValue_1 = CallFunc_StructToRowHandle_ReturnValue_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue_1 = CallFunc_NumRows_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "PreConstruct");

	Params::UUMG_AccoladeScreen_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AccoladeScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "Tick");

	Params::UUMG_AccoladeScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature");

	Params::UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature");

	Params::UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature");

	Params::UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature");

	Params::UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.PlayerTrackerInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladeScreen_C::PlayerTrackerInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "PlayerTrackerInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladesRowHandle         Accolade                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::CustomEvent_0(const struct FAccoladesRowHandle& Accolade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "CustomEvent_0");

	Params::UUMG_AccoladeScreen_C_CustomEvent_0_Params Parms{};

	Parms.Accolade = Accolade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature");

	Params::UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature");

	Params::UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.ExecuteUbergraph_UMG_AccoladeScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerAccoladeCategoriesEnumCallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerAccoladeCategoriesRowHandleCallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class UUMG_AccoladeList_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusOrchestrationSubsystem*CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_AccoladeList_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccoladesRowHandle         K2Node_CustomEvent_Accolade                                      (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AccoladeScreen_C::ExecuteUbergraph_UMG_AccoladeScreen(int32 EntryPoint, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FPlayerAccoladeCategoriesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPlayerAccoladeCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UUMG_AccoladeList_C* CallFunc_Create_ReturnValue, class UIcarusOrchestrationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_5, class UUMG_AccoladeList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_4, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_3, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, const struct FAccoladesRowHandle& K2Node_CustomEvent_Accolade, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeScreen_C", "ExecuteUbergraph_UMG_AccoladeScreen");

	Params::UUMG_AccoladeScreen_C_ExecuteUbergraph_UMG_AccoladeScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ToggleButton = K2Node_ComponentBoundEvent_ToggleButton;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_5 = K2Node_ComponentBoundEvent_ToggleButton_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_4 = K2Node_ComponentBoundEvent_ToggleButton_4;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_3 = K2Node_ComponentBoundEvent_ToggleButton_3;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_2 = K2Node_ComponentBoundEvent_ToggleButton_2;
	Parms.K2Node_CustomEvent_Accolade = K2Node_CustomEvent_Accolade;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_1 = K2Node_ComponentBoundEvent_ToggleButton_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


