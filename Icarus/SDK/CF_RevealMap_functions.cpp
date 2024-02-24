#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_RevealMap.CF_RevealMap_C
// (None)

class UClass* UCF_RevealMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_RevealMap_C");

	return Clss;
}


// CF_RevealMap_C CF_RevealMap.Default__CF_RevealMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_RevealMap_C* UCF_RevealMap_C::GetDefaultObj()
{
	static class UCF_RevealMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_RevealMap_C*>(UCF_RevealMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_RevealMap.CF_RevealMap_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_RevealMap_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_RevealMap_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_RevealMap.CF_RevealMap_C.ExecuteUbergraph_CF_RevealMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUMG_RadarMainScreenBase_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUMG_RadarMainScreenBase_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_RevealMap_C::ExecuteUbergraph_CF_RevealMap(int32 EntryPoint, TArray<class UUMG_RadarMainScreenBase_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_RadarMainScreenBase_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_RevealMap_C", "ExecuteUbergraph_CF_RevealMap");

	Params::UCF_RevealMap_C_ExecuteUbergraph_CF_RevealMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


