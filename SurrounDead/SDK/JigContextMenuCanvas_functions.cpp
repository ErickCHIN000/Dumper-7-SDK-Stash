#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JigContextMenuCanvas.JigContextMenuCanvas_C
// (None)

class UClass* UJigContextMenuCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JigContextMenuCanvas_C");

	return Clss;
}


// JigContextMenuCanvas_C JigContextMenuCanvas.Default__JigContextMenuCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJigContextMenuCanvas_C* UJigContextMenuCanvas_C::GetDefaultObj()
{
	static class UJigContextMenuCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJigContextMenuCanvas_C*>(UJigContextMenuCanvas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JigContextMenuCanvas.JigContextMenuCanvas_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJigContextMenuCanvas_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JigContextMenuCanvas_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JigContextMenuCanvas.JigContextMenuCanvas_C.ExecuteUbergraph_JigContextMenuCanvas
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UJigContextMenuComp_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UJigContextMenuComp_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UJigContextMenuCanvas_C::ExecuteUbergraph_JigContextMenuCanvas(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UJigContextMenuComp_C* CallFunc_GetComponentByClass_ReturnValue, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UJigContextMenuComp_C* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JigContextMenuCanvas_C", "ExecuteUbergraph_JigContextMenuCanvas");

	Params::UJigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


