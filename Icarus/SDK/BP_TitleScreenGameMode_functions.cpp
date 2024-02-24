#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TitleScreenGameMode.BP_TitleScreenGameMode_C
// (Actor)

class UClass* ABP_TitleScreenGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TitleScreenGameMode_C");

	return Clss;
}


// BP_TitleScreenGameMode_C BP_TitleScreenGameMode.Default__BP_TitleScreenGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TitleScreenGameMode_C* ABP_TitleScreenGameMode_C::GetDefaultObj()
{
	static class ABP_TitleScreenGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TitleScreenGameMode_C*>(ABP_TitleScreenGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TitleScreenGameMode.BP_TitleScreenGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TitleScreenGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenGameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TitleScreenGameMode.BP_TitleScreenGameMode_C.ExecuteUbergraph_BP_TitleScreenGameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusErrorSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleScreenGameMode_C::ExecuteUbergraph_BP_TitleScreenGameMode(int32 EntryPoint, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TitleScreenGameMode_C", "ExecuteUbergraph_BP_TitleScreenGameMode");

	Params::ABP_TitleScreenGameMode_C_ExecuteUbergraph_BP_TitleScreenGameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


