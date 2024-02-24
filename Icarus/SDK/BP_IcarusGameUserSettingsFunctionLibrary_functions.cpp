#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGameUserSettingsFunctionLibrary.BP_IcarusGameUserSettingsFunctionLibrary_C
// (None)

class UClass* UBP_IcarusGameUserSettingsFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGameUserSettingsFunctionLibrary_C");

	return Clss;
}


// BP_IcarusGameUserSettingsFunctionLibrary_C BP_IcarusGameUserSettingsFunctionLibrary.Default__BP_IcarusGameUserSettingsFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGameUserSettingsFunctionLibrary_C* UBP_IcarusGameUserSettingsFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_IcarusGameUserSettingsFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGameUserSettingsFunctionLibrary_C*>(UBP_IcarusGameUserSettingsFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGameUserSettingsFunctionLibrary.BP_IcarusGameUserSettingsFunctionLibrary_C.Get Icarus Game User Settings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*Settings                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*K2Node_DynamicCast_AsBP_Icarus_Game_User_Settings                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGameUserSettingsFunctionLibrary_C::Get_Icarus_Game_User_Settings(class UObject* __WorldContext, class UBP_IcarusGameUserSettings_C** Settings, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UBP_IcarusGameUserSettings_C* K2Node_DynamicCast_AsBP_Icarus_Game_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameUserSettingsFunctionLibrary_C", "Get Icarus Game User Settings");

	Params::UBP_IcarusGameUserSettingsFunctionLibrary_C_Get_Icarus_Game_User_Settings_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Game_User_Settings = K2Node_DynamicCast_AsBP_Icarus_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Settings != nullptr)
		*Settings = Parms.Settings;

}

}


