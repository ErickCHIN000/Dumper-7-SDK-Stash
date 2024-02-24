#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C
// (None)

class UClass* UWBP_ConquestHUDInformation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConquestHUDInformation_C");

	return Clss;
}


// WBP_ConquestHUDInformation_C WBP_ConquestHUDInformation.Default__WBP_ConquestHUDInformation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConquestHUDInformation_C* UWBP_ConquestHUDInformation_C::GetDefaultObj()
{
	static class UWBP_ConquestHUDInformation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConquestHUDInformation_C*>(UWBP_ConquestHUDInformation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C.SetZoneParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ZoneName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                TeamColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RedProgress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              blueProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ZoneProgressHexagon_C*  ZoneWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConquestHUDInformation_C::SetZoneParameters(bool Visible, class FText& ZoneName, const struct FLinearColor& TeamColor, float RedProgress, float blueProgress, class UWBP_ZoneProgressHexagon_C* ZoneWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestHUDInformation_C", "SetZoneParameters");

	Params::UWBP_ConquestHUDInformation_C_SetZoneParameters_Params Parms{};

	Parms.Visible = Visible;
	Parms.ZoneName = ZoneName;
	Parms.TeamColor = TeamColor;
	Parms.RedProgress = RedProgress;
	Parms.blueProgress = blueProgress;
	Parms.ZoneWidget = ZoneWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C.BP_VisualizeLocalZone
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              RedProgress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              blueProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CaptureColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ZoneShortName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CompletedFully                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ConquestHUDInformation_C::BP_VisualizeLocalZone(bool Show, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestHUDInformation_C", "BP_VisualizeLocalZone");

	Params::UWBP_ConquestHUDInformation_C_BP_VisualizeLocalZone_Params Parms{};

	Parms.Show = Show;
	Parms.RedProgress = RedProgress;
	Parms.blueProgress = blueProgress;
	Parms.CaptureColor = CaptureColor;
	Parms.ZoneShortName = ZoneShortName;
	Parms.CompletedFully = CompletedFully;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C.BP_VisualizeZoneWithIndex
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              RedProgress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              blueProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CaptureColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ZoneShortName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CompletedFully                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ConquestHUDInformation_C::BP_VisualizeZoneWithIndex(int32 Index, bool bShow, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestHUDInformation_C", "BP_VisualizeZoneWithIndex");

	Params::UWBP_ConquestHUDInformation_C_BP_VisualizeZoneWithIndex_Params Parms{};

	Parms.Index = Index;
	Parms.bShow = bShow;
	Parms.RedProgress = RedProgress;
	Parms.blueProgress = blueProgress;
	Parms.CaptureColor = CaptureColor;
	Parms.ZoneShortName = ZoneShortName;
	Parms.CompletedFully = CompletedFully;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C.BP_VisualizeGlobalScore
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RedPercentage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BluePercentage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConquestHUDInformation_C::BP_VisualizeGlobalScore(float RedPercentage, float BluePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestHUDInformation_C", "BP_VisualizeGlobalScore");

	Params::UWBP_ConquestHUDInformation_C_BP_VisualizeGlobalScore_Params Parms{};

	Parms.RedPercentage = RedPercentage;
	Parms.BluePercentage = BluePercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C.ExecuteUbergraph_WBP_ConquestHUDInformation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_redProgress_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_blueProgress_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_captureColor_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_zoneShortName_1                                     (ConstParm)
// bool                               K2Node_Event_completedFully_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShow                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_redProgress                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_blueProgress                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_captureColor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_zoneShortName                                       (ConstParm)
// bool                               K2Node_Event_completedFully                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_RedPercentage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_BluePercentage                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ZoneProgressHexagon_C*  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConquestHUDInformation_C::ExecuteUbergraph_WBP_ConquestHUDInformation(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_Event_show, float K2Node_Event_redProgress_1, float K2Node_Event_blueProgress_1, const struct FLinearColor& K2Node_Event_captureColor_1, class FText K2Node_Event_zoneShortName_1, bool K2Node_Event_completedFully_1, int32 K2Node_Event_Index, bool K2Node_Event_bShow, float K2Node_Event_redProgress, float K2Node_Event_blueProgress, const struct FLinearColor& K2Node_Event_captureColor, class FText K2Node_Event_zoneShortName, bool K2Node_Event_completedFully, float K2Node_Event_RedPercentage, float K2Node_Event_BluePercentage, class UWBP_ZoneProgressHexagon_C* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestHUDInformation_C", "ExecuteUbergraph_WBP_ConquestHUDInformation");

	Params::UWBP_ConquestHUDInformation_C_ExecuteUbergraph_WBP_ConquestHUDInformation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_show = K2Node_Event_show;
	Parms.K2Node_Event_redProgress_1 = K2Node_Event_redProgress_1;
	Parms.K2Node_Event_blueProgress_1 = K2Node_Event_blueProgress_1;
	Parms.K2Node_Event_captureColor_1 = K2Node_Event_captureColor_1;
	Parms.K2Node_Event_zoneShortName_1 = K2Node_Event_zoneShortName_1;
	Parms.K2Node_Event_completedFully_1 = K2Node_Event_completedFully_1;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_bShow = K2Node_Event_bShow;
	Parms.K2Node_Event_redProgress = K2Node_Event_redProgress;
	Parms.K2Node_Event_blueProgress = K2Node_Event_blueProgress;
	Parms.K2Node_Event_captureColor = K2Node_Event_captureColor;
	Parms.K2Node_Event_zoneShortName = K2Node_Event_zoneShortName;
	Parms.K2Node_Event_completedFully = K2Node_Event_completedFully;
	Parms.K2Node_Event_RedPercentage = K2Node_Event_RedPercentage;
	Parms.K2Node_Event_BluePercentage = K2Node_Event_BluePercentage;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


