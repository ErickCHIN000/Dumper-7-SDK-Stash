#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_VLA_PS_AUTOMAGICEXE.LightProjData_VLA_PS_AUTOMAGICEXE_C
// (None)

class UClass* ULightProjData_VLA_PS_AUTOMAGICEXE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_VLA_PS_AUTOMAGICEXE_C");

	return Clss;
}


// LightProjData_VLA_PS_AUTOMAGICEXE_C LightProjData_VLA_PS_AUTOMAGICEXE.Default__LightProjData_VLA_PS_AUTOMAGICEXE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_VLA_PS_AUTOMAGICEXE_C* ULightProjData_VLA_PS_AUTOMAGICEXE_C::GetDefaultObj()
{
	static class ULightProjData_VLA_PS_AUTOMAGICEXE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_VLA_PS_AUTOMAGICEXE_C*>(ULightProjData_VLA_PS_AUTOMAGICEXE_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_VLA_PS_AUTOMAGICEXE.LightProjData_VLA_PS_AUTOMAGICEXE_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_AUTOMAGICEXE_C*     K2Node_DynamicCast_AsAbility_AUTOMAGICEXE                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMagicMissileTarget_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProjData_VLA_PS_AUTOMAGICEXE_C::OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_AUTOMAGICEXE_C* K2Node_DynamicCast_AsAbility_AUTOMAGICEXE, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMagicMissileTarget_Res, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_VLA_PS_AUTOMAGICEXE_C", "OnBegin");

	Params::ULightProjData_VLA_PS_AUTOMAGICEXE_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbility_AUTOMAGICEXE = K2Node_DynamicCast_AsAbility_AUTOMAGICEXE;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMagicMissileTarget_Res = CallFunc_GetMagicMissileTarget_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


