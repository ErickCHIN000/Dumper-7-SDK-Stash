#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Crossbow_PorSawmill_Ric1.LightProjectile_Crossbow_PorSawmill_Ric1_C
// (None)

class UClass* ULightProjectile_Crossbow_PorSawmill_Ric1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Crossbow_PorSawmill_Ric1_C");

	return Clss;
}


// LightProjectile_Crossbow_PorSawmill_Ric1_C LightProjectile_Crossbow_PorSawmill_Ric1.Default__LightProjectile_Crossbow_PorSawmill_Ric1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Crossbow_PorSawmill_Ric1_C* ULightProjectile_Crossbow_PorSawmill_Ric1_C::GetDefaultObj()
{
	static class ULightProjectile_Crossbow_PorSawmill_Ric1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Crossbow_PorSawmill_Ric1_C*>(ULightProjectile_Crossbow_PorSawmill_Ric1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_Crossbow_PorSawmill_Ric1.LightProjectile_Crossbow_PorSawmill_Ric1_C.OnRicochet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     ImpactVelocity                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_Crossbow_PorSawmill_Ric1_C::OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, class AActor* CallFunc_GetSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_Crossbow_PorSawmill_Ric1_C", "OnRicochet");

	Params::ULightProjectile_Crossbow_PorSawmill_Ric1_C_OnRicochet_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.ImpactVelocity = ImpactVelocity;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


