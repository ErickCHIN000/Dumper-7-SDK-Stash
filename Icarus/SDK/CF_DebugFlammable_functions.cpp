#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DebugFlammable.CF_DebugFlammable_C
// (None)

class UClass* UCF_DebugFlammable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DebugFlammable_C");

	return Clss;
}


// CF_DebugFlammable_C CF_DebugFlammable.Default__CF_DebugFlammable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DebugFlammable_C* UCF_DebugFlammable_C::GetDefaultObj()
{
	static class UCF_DebugFlammable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DebugFlammable_C*>(UCF_DebugFlammable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DebugFlammable.CF_DebugFlammable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_DebugFlammable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugFlammable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_DebugFlammable.CF_DebugFlammable_C.HandleOnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 SelectedWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChecked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugFlammable_C::HandleOnCheckboxStateChanged(class UUserWidget* SelectedWidget, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugFlammable_C", "HandleOnCheckboxStateChanged");

	Params::UCF_DebugFlammable_C_HandleOnCheckboxStateChanged_Params Parms{};

	Parms.SelectedWidget = SelectedWidget;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DebugFlammable.CF_DebugFlammable_C.HandleOnItemSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_DebugFlammable_C::HandleOnItemSet(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugFlammable_C", "HandleOnItemSet");

	Params::UCF_DebugFlammable_C_HandleOnItemSet_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DebugFlammable.CF_DebugFlammable_C.ExecuteUbergraph_CF_DebugFlammable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableComponentClassRow_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetAllFlammableComponentClasses_ReturnValue             (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsFlammable_Component                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_SelectedWidget                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsChecked                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableComponentClassRow_C*K2Node_DynamicCast_AsFlammable_Component_Class_Row               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableComponentClassRow_C*K2Node_DynamicCast_AsFlammable_Component_Class_Row_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDebugFlammableState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECheckBoxState          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_DebugFlammable_C::ExecuteUbergraph_CF_DebugFlammable(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, enum class ECheckBoxState Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ECheckBoxState Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class UFlammableComponentClassRow_C* CallFunc_Create_ReturnValue, TArray<class UClass*>& CallFunc_GetAllFlammableComponentClasses_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFlammable_Component, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UUserWidget* K2Node_Event_SelectedWidget, bool K2Node_Event_IsChecked, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, class UFlammableComponentClassRow_C* K2Node_DynamicCast_AsFlammable_Component_Class_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UUserWidget* K2Node_Event_Widget, class UFlammableComponentClassRow_C* K2Node_DynamicCast_AsFlammable_Component_Class_Row_1, bool K2Node_DynamicCast_bSuccess_1, class ADisasterController* CallFunc_GetDisasterController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetDebugFlammableState_ReturnValue, enum class ECheckBoxState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugFlammable_C", "ExecuteUbergraph_CF_DebugFlammable");

	Params::UCF_DebugFlammable_C_ExecuteUbergraph_CF_DebugFlammable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllFlammableComponentClasses_ReturnValue = CallFunc_GetAllFlammableComponentClasses_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsFlammable_Component = K2Node_ClassDynamicCast_AsFlammable_Component;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.K2Node_Event_SelectedWidget = K2Node_Event_SelectedWidget;
	Parms.K2Node_Event_IsChecked = K2Node_Event_IsChecked;
	Parms.CallFunc_GetDisasterController_ReturnValue = CallFunc_GetDisasterController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFlammable_Component_Class_Row = K2Node_DynamicCast_AsFlammable_Component_Class_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_DynamicCast_AsFlammable_Component_Class_Row_1 = K2Node_DynamicCast_AsFlammable_Component_Class_Row_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDisasterController_ReturnValue_1 = CallFunc_GetDisasterController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDebugFlammableState_ReturnValue = CallFunc_GetDebugFlammableState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


