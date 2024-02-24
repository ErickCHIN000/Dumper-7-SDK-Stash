#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FeatureLevelIndicator.UMG_FeatureLevelIndicator_C
// (None)

class UClass* UUMG_FeatureLevelIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FeatureLevelIndicator_C");

	return Clss;
}


// UMG_FeatureLevelIndicator_C UMG_FeatureLevelIndicator.Default__UMG_FeatureLevelIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FeatureLevelIndicator_C* UUMG_FeatureLevelIndicator_C::GetDefaultObj()
{
	static class UUMG_FeatureLevelIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FeatureLevelIndicator_C*>(UUMG_FeatureLevelIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FeatureLevelIndicator.UMG_FeatureLevelIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FeatureLevelIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FeatureLevelIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FeatureLevelIndicator.UMG_FeatureLevelIndicator_C.ExecuteUbergraph_UMG_FeatureLevelIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFeatureLevelsRowHandle     CallFunc_GetCurrentFeatureLevel_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FFeatureLevelData           CallFunc_GetFeatureLevelsStruct_FeatureLevels                    (None)
// enum class EValid                  CallFunc_GetFeatureLevelsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FeatureLevelIndicator_C::ExecuteUbergraph_UMG_FeatureLevelIndicator(int32 EntryPoint, const struct FFeatureLevelsRowHandle& CallFunc_GetCurrentFeatureLevel_ReturnValue, const struct FFeatureLevelData& CallFunc_GetFeatureLevelsStruct_FeatureLevels, enum class EValid CallFunc_GetFeatureLevelsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FeatureLevelIndicator_C", "ExecuteUbergraph_UMG_FeatureLevelIndicator");

	Params::UUMG_FeatureLevelIndicator_C_ExecuteUbergraph_UMG_FeatureLevelIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentFeatureLevel_ReturnValue = CallFunc_GetCurrentFeatureLevel_ReturnValue;
	Parms.CallFunc_GetFeatureLevelsStruct_FeatureLevels = CallFunc_GetFeatureLevelsStruct_FeatureLevels;
	Parms.CallFunc_GetFeatureLevelsStruct_Paths = CallFunc_GetFeatureLevelsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


