#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TurretInterface.UMG_TurretInterface_C
// (None)

class UClass* UUMG_TurretInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TurretInterface_C");

	return Clss;
}


// UMG_TurretInterface_C UMG_TurretInterface.Default__UMG_TurretInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TurretInterface_C* UUMG_TurretInterface_C::GetDefaultObj()
{
	static class UUMG_TurretInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TurretInterface_C*>(UUMG_TurretInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TurretInterface.UMG_TurretInterface_C.UpdateTurretInterfaceText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmmoCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TurretInterface_C::UpdateTurretInterfaceText(int32 AmmoCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TurretInterface_C", "UpdateTurretInterfaceText");

	Params::UUMG_TurretInterface_C_UpdateTurretInterfaceText_Params Parms{};

	Parms.AmmoCount = AmmoCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TurretInterface.UMG_TurretInterface_C.ExecuteUbergraph_UMG_TurretInterface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_AmmoCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void UUMG_TurretInterface_C::ExecuteUbergraph_UMG_TurretInterface(int32 EntryPoint, int32 K2Node_CustomEvent_AmmoCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TurretInterface_C", "ExecuteUbergraph_UMG_TurretInterface");

	Params::UUMG_TurretInterface_C_ExecuteUbergraph_UMG_TurretInterface_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AmmoCount = K2Node_CustomEvent_AmmoCount;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


