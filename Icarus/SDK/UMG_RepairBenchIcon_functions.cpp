#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RepairBenchIcon.UMG_RepairBenchIcon_C
// (None)

class UClass* UUMG_RepairBenchIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RepairBenchIcon_C");

	return Clss;
}


// UMG_RepairBenchIcon_C UMG_RepairBenchIcon.Default__UMG_RepairBenchIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RepairBenchIcon_C* UUMG_RepairBenchIcon_C::GetDefaultObj()
{
	static class UUMG_RepairBenchIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RepairBenchIcon_C*>(UUMG_RepairBenchIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RepairBenchIcon.UMG_RepairBenchIcon_C.OnLoaded_C712882247D2AB4653885092C87494BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBenchIcon_C::OnLoaded_C712882247D2AB4653885092C87494BA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBenchIcon_C", "OnLoaded_C712882247D2AB4653885092C87494BA");

	Params::UUMG_RepairBenchIcon_C_OnLoaded_C712882247D2AB4653885092C87494BA_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBenchIcon.UMG_RepairBenchIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RepairBenchIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBenchIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RepairBenchIcon.UMG_RepairBenchIcon_C.ExecuteUbergraph_UMG_RepairBenchIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeSet                  CallFunc_GetRecipeSetsStruct_RecipeSets                          (None)
// enum class EValid                  CallFunc_GetRecipeSetsStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_RepairBenchIcon_C::ExecuteUbergraph_UMG_RepairBenchIcon(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, const struct FRecipeSet& CallFunc_GetRecipeSetsStruct_RecipeSets, enum class EValid CallFunc_GetRecipeSetsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBenchIcon_C", "ExecuteUbergraph_UMG_RepairBenchIcon");

	Params::UUMG_RepairBenchIcon_C_ExecuteUbergraph_UMG_RepairBenchIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetRecipeSetsStruct_RecipeSets = CallFunc_GetRecipeSetsStruct_RecipeSets;
	Parms.CallFunc_GetRecipeSetsStruct_Paths = CallFunc_GetRecipeSetsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


