#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OW_BP_smallFog.OW_BP_smallFog_C
// (Actor)

class UClass* AOW_BP_smallFog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OW_BP_smallFog_C");

	return Clss;
}


// OW_BP_smallFog_C OW_BP_smallFog.Default__OW_BP_smallFog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOW_BP_smallFog_C* AOW_BP_smallFog_C::GetDefaultObj()
{
	static class AOW_BP_smallFog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOW_BP_smallFog_C*>(AOW_BP_smallFog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OW_BP_smallFog.OW_BP_smallFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOW_BP_smallFog_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OW_BP_smallFog_C", "UserConstructionScript");

	Params::AOW_BP_smallFog_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


