#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MultiplayDuelComponent.MultiplayDuelComponent_C
// (None)

class UClass* UMultiplayDuelComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiplayDuelComponent_C");

	return Clss;
}


// MultiplayDuelComponent_C MultiplayDuelComponent.Default__MultiplayDuelComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiplayDuelComponent_C* UMultiplayDuelComponent_C::GetDefaultObj()
{
	static class UMultiplayDuelComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiplayDuelComponent_C*>(UMultiplayDuelComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiplayDuelComponent.MultiplayDuelComponent_C.OnStartDuelExtendTimeBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiplayDuelComponent_C::OnStartDuelExtendTimeBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayDuelComponent_C", "OnStartDuelExtendTimeBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MultiplayDuelComponent.MultiplayDuelComponent_C.ExecuteUbergraph_MultiplayDuelComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUDMission_C*               K2Node_DynamicCast_AsHUDMission                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMultiplayDuelComponent_C::ExecuteUbergraph_MultiplayDuelComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayDuelComponent_C", "ExecuteUbergraph_MultiplayDuelComponent");

	Params::UMultiplayDuelComponent_C_ExecuteUbergraph_MultiplayDuelComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUDMission = K2Node_DynamicCast_AsHUDMission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


