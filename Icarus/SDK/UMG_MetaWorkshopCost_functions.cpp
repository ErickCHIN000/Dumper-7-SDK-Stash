#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C
// (None)

class UClass* UUMG_MetaWorkshopCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MetaWorkshopCost_C");

	return Clss;
}


// UMG_MetaWorkshopCost_C UMG_MetaWorkshopCost.Default__UMG_MetaWorkshopCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MetaWorkshopCost_C* UUMG_MetaWorkshopCost_C::GetDefaultObj()
{
	static class UUMG_MetaWorkshopCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MetaWorkshopCost_C*>(UUMG_MetaWorkshopCost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C.OnLoaded_88A07CE44A58269F97E6A0B898CBB13E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MetaWorkshopCost_C::OnLoaded_88A07CE44A58269F97E6A0B898CBB13E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaWorkshopCost_C", "OnLoaded_88A07CE44A58269F97E6A0B898CBB13E");

	Params::UUMG_MetaWorkshopCost_C_OnLoaded_88A07CE44A58269F97E6A0B898CBB13E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MetaWorkshopCost_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaWorkshopCost_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C.ExecuteUbergraph_UMG_MetaWorkshopCost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrencyRowHandle      CallFunc_MakeMetaCurrency_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrency               CallFunc_GetMetaCurrencyStruct_MetaCurrency                      (None)
// enum class EValid                  CallFunc_GetMetaCurrencyStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUMG_MetaWorkshopCost_C::ExecuteUbergraph_UMG_MetaWorkshopCost(int32 EntryPoint, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, class UObject* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaWorkshopCost_C", "ExecuteUbergraph_UMG_MetaWorkshopCost");

	Params::UUMG_MetaWorkshopCost_C_ExecuteUbergraph_UMG_MetaWorkshopCost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeMetaCurrency_ReturnValue = CallFunc_MakeMetaCurrency_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetMetaCurrencyStruct_MetaCurrency = CallFunc_GetMetaCurrencyStruct_MetaCurrency;
	Parms.CallFunc_GetMetaCurrencyStruct_Paths = CallFunc_GetMetaCurrencyStruct_Paths;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


