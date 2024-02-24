#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy.LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C
// (None)

class UClass* ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C");

	return Clss;
}


// LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy.Default__LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C* ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C::GetDefaultObj()
{
	static class ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C*>(ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy.LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C::OnBegin(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C", "OnBegin");

	Params::ULightProjectile_TOR_SG_GyroJet_Normal_Diplomacy_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


