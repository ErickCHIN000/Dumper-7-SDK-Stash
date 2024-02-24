#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Tooltip_PassiveStats.Tooltip_PassiveStats_C
// (None)

class UClass* UTooltip_PassiveStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tooltip_PassiveStats_C");

	return Clss;
}


// Tooltip_PassiveStats_C Tooltip_PassiveStats.Default__Tooltip_PassiveStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTooltip_PassiveStats_C* UTooltip_PassiveStats_C::GetDefaultObj()
{
	static class UTooltip_PassiveStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTooltip_PassiveStats_C*>(UTooltip_PassiveStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tooltip_PassiveStats.Tooltip_PassiveStats_C.GetVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTooltip_PassiveStats_C::GetVehicle(class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tooltip_PassiveStats_C", "GetVehicle");

	Params::UTooltip_PassiveStats_C_GetVehicle_Params Parms{};

	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip_PassiveStats.Tooltip_PassiveStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_PassiveStats_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tooltip_PassiveStats_C", "PreConstruct");

	Params::UTooltip_PassiveStats_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip_PassiveStats.Tooltip_PassiveStats_C.ExecuteUbergraph_Tooltip_PassiveStats
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_PassiveStats_C::ExecuteUbergraph_Tooltip_PassiveStats(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tooltip_PassiveStats_C", "ExecuteUbergraph_Tooltip_PassiveStats");

	Params::UTooltip_PassiveStats_C_ExecuteUbergraph_Tooltip_PassiveStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


