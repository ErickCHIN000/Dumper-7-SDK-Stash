#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerConquestFarInfoWidget.WBP_PlayerConquestFarInfoWidget_C
// (None)

class UClass* UWBP_PlayerConquestFarInfoWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerConquestFarInfoWidget_C");

	return Clss;
}


// WBP_PlayerConquestFarInfoWidget_C WBP_PlayerConquestFarInfoWidget.Default__WBP_PlayerConquestFarInfoWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerConquestFarInfoWidget_C* UWBP_PlayerConquestFarInfoWidget_C::GetDefaultObj()
{
	static class UWBP_PlayerConquestFarInfoWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerConquestFarInfoWidget_C*>(UWBP_PlayerConquestFarInfoWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerConquestFarInfoWidget.WBP_PlayerConquestFarInfoWidget_C.BP_Init
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerConquestFarInfoWidget_C::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerConquestFarInfoWidget_C", "BP_Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerConquestFarInfoWidget.WBP_PlayerConquestFarInfoWidget_C.ExecuteUbergraph_WBP_PlayerConquestFarInfoWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRedTeamColor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBlueTeamColor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_ByteByte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerConquestFarInfoWidget_C::ExecuteUbergraph_WBP_PlayerConquestFarInfoWidget(int32 EntryPoint, uint8 Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_GetRedTeamColor_ReturnValue, const struct FLinearColor& CallFunc_GetBlueTeamColor_ReturnValue, uint8 CallFunc_GetTeam_ReturnValue, bool CallFunc_Less_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerConquestFarInfoWidget_C", "ExecuteUbergraph_WBP_PlayerConquestFarInfoWidget");

	Params::UWBP_PlayerConquestFarInfoWidget_C_ExecuteUbergraph_WBP_PlayerConquestFarInfoWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetRedTeamColor_ReturnValue = CallFunc_GetRedTeamColor_ReturnValue;
	Parms.CallFunc_GetBlueTeamColor_ReturnValue = CallFunc_GetBlueTeamColor_ReturnValue;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_Less_ByteByte_ReturnValue = CallFunc_Less_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


