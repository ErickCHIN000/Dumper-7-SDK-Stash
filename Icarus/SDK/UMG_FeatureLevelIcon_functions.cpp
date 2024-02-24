#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C
// (None)

class UClass* UUMG_FeatureLevelIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FeatureLevelIcon_C");

	return Clss;
}


// UMG_FeatureLevelIcon_C UMG_FeatureLevelIcon.Default__UMG_FeatureLevelIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FeatureLevelIcon_C* UUMG_FeatureLevelIcon_C::GetDefaultObj()
{
	static class UUMG_FeatureLevelIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FeatureLevelIcon_C*>(UUMG_FeatureLevelIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C.SetFeatureLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFeatureLevelsRowHandle     FeatureLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FeatureLevelIcon_C::SetFeatureLevel(const struct FFeatureLevelsRowHandle& FeatureLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FeatureLevelIcon_C", "SetFeatureLevel");

	Params::UUMG_FeatureLevelIcon_C_SetFeatureLevel_Params Parms{};

	Parms.FeatureLevel = FeatureLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FeatureLevelIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FeatureLevelIcon_C", "PreConstruct");

	Params::UUMG_FeatureLevelIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C.ExecuteUbergraph_UMG_FeatureLevelIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFeatureLevelsRowHandle     K2Node_CustomEvent_FeatureLevel                                  (NoDestructor, HasGetValueTypeHash)
// struct FFeatureLevelData           CallFunc_GetFeatureLevelsStruct_FeatureLevels                    (None)
// enum class EValid                  CallFunc_GetFeatureLevelsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FeatureLevelIcon_C::ExecuteUbergraph_UMG_FeatureLevelIcon(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FFeatureLevelsRowHandle& K2Node_CustomEvent_FeatureLevel, const struct FFeatureLevelData& CallFunc_GetFeatureLevelsStruct_FeatureLevels, enum class EValid CallFunc_GetFeatureLevelsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FeatureLevelIcon_C", "ExecuteUbergraph_UMG_FeatureLevelIcon");

	Params::UUMG_FeatureLevelIcon_C_ExecuteUbergraph_UMG_FeatureLevelIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_FeatureLevel = K2Node_CustomEvent_FeatureLevel;
	Parms.CallFunc_GetFeatureLevelsStruct_FeatureLevels = CallFunc_GetFeatureLevelsStruct_FeatureLevels;
	Parms.CallFunc_GetFeatureLevelsStruct_Paths = CallFunc_GetFeatureLevelsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


