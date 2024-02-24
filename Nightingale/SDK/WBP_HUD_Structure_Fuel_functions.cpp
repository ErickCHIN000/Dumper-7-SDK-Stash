#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C
// (None)

class UClass* UWBP_HUD_Structure_Fuel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Structure_Fuel_C");

	return Clss;
}


// WBP_HUD_Structure_Fuel_C WBP_HUD_Structure_Fuel.Default__WBP_HUD_Structure_Fuel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Structure_Fuel_C* UWBP_HUD_Structure_Fuel_C::GetDefaultObj()
{
	static class UWBP_HUD_Structure_Fuel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Structure_Fuel_C*>(UWBP_HUD_Structure_Fuel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnRemainingFuelPercentChanged_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::RemoveBindings(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnRemainingFuelPercentChanged_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "RemoveBindings");

	Params::UWBP_HUD_Structure_Fuel_C_RemoveBindings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput = CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput;
	Parms.CallFunc_UnbindDelegate_OnRemainingFuelPercentChanged_self_CastInput = CallFunc_UnbindDelegate_OnRemainingFuelPercentChanged_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnRemainingFuelPercentChanged_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::SetupBindings(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnRemainingFuelPercentChanged_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "SetupBindings");

	Params::UWBP_HUD_Structure_Fuel_C_SetupBindings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput = CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput;
	Parms.CallFunc_BindDelegate_OnRemainingFuelPercentChanged_self_CastInput = CallFunc_BindDelegate_OnRemainingFuelPercentChanged_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.UpdateIgnitionStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActivelyConsumed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::UpdateIgnitionStatus(bool ActivelyConsumed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "UpdateIgnitionStatus");

	Params::UWBP_HUD_Structure_Fuel_C_UpdateIgnitionStatus_Params Parms{};

	Parms.ActivelyConsumed = ActivelyConsumed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.UpdateFuelPercentage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FuelPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::UpdateFuelPercentage(float FuelPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "UpdateFuelPercentage");

	Params::UWBP_HUD_Structure_Fuel_C_UpdateFuelPercentage_Params Parms{};

	Parms.FuelPercent = FuelPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NameColor_Complete                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NameColor_NotComplete                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetProgress_Progress_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::Refresh(const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_SetProgress_Progress_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "Refresh");

	Params::UWBP_HUD_Structure_Fuel_C_Refresh_Params Parms{};

	Parms.NameColor_Complete = NameColor_Complete;
	Parms.NameColor_NotComplete = NameColor_NotComplete;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetProgress_Progress_ImplicitCast = CallFunc_SetProgress_Progress_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     StructureObj                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_GetRemainingFuelPercent_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRemainingFuelPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::Initialize(class UObject* StructureObj, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_GetRemainingFuelPercent_self_CastInput, float CallFunc_GetRemainingFuelPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "Initialize");

	Params::UWBP_HUD_Structure_Fuel_C_Initialize_Params Parms{};

	Parms.StructureObj = StructureObj;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;
	Parms.CallFunc_GetRemainingFuelPercent_self_CastInput = CallFunc_GetRemainingFuelPercent_self_CastInput;
	Parms.CallFunc_GetRemainingFuelPercent_ReturnValue = CallFunc_GetRemainingFuelPercent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Structure_Fuel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_Structure_Fuel.WBP_HUD_Structure_Fuel_C.ExecuteUbergraph_WBP_HUD_Structure_Fuel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Fuel_C::ExecuteUbergraph_WBP_HUD_Structure_Fuel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Fuel_C", "ExecuteUbergraph_WBP_HUD_Structure_Fuel");

	Params::UWBP_HUD_Structure_Fuel_C_ExecuteUbergraph_WBP_HUD_Structure_Fuel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


