#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IBPChar_Player.IBPChar_Player_C
// (None)

class UClass* IIBPChar_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IBPChar_Player_C");

	return Clss;
}


// IBPChar_Player_C IBPChar_Player.Default__IBPChar_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIBPChar_Player_C* IIBPChar_Player_C::GetDefaultObj()
{
	static class IIBPChar_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIBPChar_Player_C*>(IIBPChar_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IBPChar_Player.IBPChar_Player_C.GetPlayerCharacterEventHub
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPEventHub_PlayerCharacter_C*Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetPlayerCharacterEventHub(class UBPEventHub_PlayerCharacter_C** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetPlayerCharacterEventHub");

	Params::IIBPChar_Player_C_GetPlayerCharacterEventHub_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_PlayAbilitySoundOnPlayer
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLocalOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::Audio_PlayAbilitySoundOnPlayer(bool IsLocalOnly, class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_PlayAbilitySoundOnPlayer");

	Params::IIBPChar_Player_C_Audio_PlayAbilitySoundOnPlayer_Params Parms{};

	Parms.IsLocalOnly = IsLocalOnly;
	Parms.WwiseEvent = WwiseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_HammerWindup
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_HammerWindup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_HammerWindup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponVisibility3rd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::SetActionSkillWeaponVisibility3rd(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SetActionSkillWeaponVisibility3rd");

	Params::IIBPChar_Player_C_SetActionSkillWeaponVisibility3rd_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponVisibility1st
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::SetActionSkillWeaponVisibility1st(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SetActionSkillWeaponVisibility1st");

	Params::IIBPChar_Player_C_SetActionSkillWeaponVisibility1st_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_HammerSlam
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_HammerSlam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_HammerSlam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_Smite_Exp
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::Audio_Player_Knight_Smite_Exp(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_Smite_Exp");

	Params::IIBPChar_Player_C_Audio_Player_Knight_Smite_Exp_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_AimedShot_Intensify
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::Audio_Player_Ranger_AimedShot_Intensify(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_AimedShot_Intensify");

	Params::IIBPChar_Player_C_Audio_Player_Ranger_AimedShot_Intensify_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_AimedShot_End
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Ranger_AimedShot_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_AimedShot_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_AimedShot_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Ranger_AimedShot_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_AimedShot_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_GroundSlam_Impact
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_GroundSlam_Impact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_GroundSlam_Impact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_GroundSlam_Buildup
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_GroundSlam_Buildup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_GroundSlam_Buildup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.SetAntiqueGreatbowAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::SetAntiqueGreatbowAttribute(bool Enable, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SetAntiqueGreatbowAttribute");

	Params::IIBPChar_Player_C_SetAntiqueGreatbowAttribute_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Melee_Killed
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::Audio_Player_Melee_Killed(class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Melee_Killed");

	Params::IIBPChar_Player_C_Audio_Player_Melee_Killed_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Melee_Ringout
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 RingoutAudio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCritical                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 CriticalAudio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::Audio_Player_Melee_Ringout(class UWwiseEvent* RingoutAudio, bool IsCritical, class UWwiseEvent* CriticalAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Melee_Ringout");

	Params::IIBPChar_Player_C_Audio_Player_Melee_Ringout_Params Parms{};

	Parms.RingoutAudio = RingoutAudio;
	Parms.IsCritical = IsCritical;
	Parms.CriticalAudio = CriticalAudio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_HammerToss_Catch
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_HammerToss_Catch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_HammerToss_Catch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_HammerToss_Recall
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_HammerToss_Recall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_HammerToss_Recall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_HammerToss_Throw
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_HammerToss_Throw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_HammerToss_Throw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_HammerToss_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_HammerToss_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_HammerToss_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_FireBreath_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_FireBreath_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_FireBreath_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_FireBreath_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Knight_FireBreath_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Knight_FireBreath_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_GunMage_Polymorph_Crush
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_GunMage_Polymorph_Crush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_GunMage_Polymorph_Crush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_GunMage_Polymorph_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_GunMage_Polymorph_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_GunMage_Polymorph_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Rogue_Stealth_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Rogue_Stealth_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Rogue_Stealth_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Rogue_Stealth_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Rogue_Stealth_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Rogue_Stealth_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Shared_Skill_Damage
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ActorLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::Audio_Player_Shared_Skill_Damage(const struct FVector& ActorLocation, class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Shared_Skill_Damage");

	Params::IIBPChar_Player_C_Audio_Player_Shared_Skill_Damage_Params Parms{};

	Parms.ActorLocation = ActorLocation;
	Parms.WwiseEvent = WwiseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Rogue_LivingBlade_Move
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Rogue_LivingBlade_Move()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Rogue_LivingBlade_Move");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Rogue_LivingBlade_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Rogue_LivingBlade_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Rogue_LivingBlade_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_CryoNado_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Ranger_CryoNado_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_CryoNado_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_CalledShot_Fire
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Ranger_CalledShot_Fire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_CalledShot_Fire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_CalledShot_Draw
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Ranger_CalledShot_Draw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_CalledShot_Draw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_CalledShot_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Ranger_CalledShot_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Ranger_CalledShot_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Necro_Sacrifice_Exp
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Necro_Sacrifice_Exp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Necro_Sacrifice_Exp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Necro_Reaper_Invulnerable
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Necro_Reaper_Invulnerable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Necro_Reaper_Invulnerable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Necro_Reaper_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Necro_Reaper_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Necro_Reaper_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Necro_Reaper_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Necro_Reaper_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Necro_Reaper_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Necro_Sacrifice_Cast
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Necro_Sacrifice_Cast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Necro_Sacrifice_Cast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_BloodSacrifice
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_BloodSacrifice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_BloodSacrifice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Rage_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_Rage_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Rage_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Rage_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_Rage_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Rage_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Slass_Impact
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_Slass_Impact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Slass_Impact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Slass_Swing
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_Slass_Swing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Slass_Swing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Slass_Jump
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_Slass_Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Slass_Jump");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Whirlwind_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::Audio_Player_Barbarian_Whirlwind_Stop(bool Interrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Whirlwind_Stop");

	Params::IIBPChar_Player_C_Audio_Player_Barbarian_Whirlwind_Stop_Params Parms{};

	Parms.Interrupt = Interrupt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Whirlwind_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIBPChar_Player_C::Audio_Player_Barbarian_Whirlwind_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "Audio_Player_Barbarian_Whirlwind_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IBPChar_Player.IBPChar_Player_C.SetPlayerWandVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RightHandWand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::SetPlayerWandVisibility(bool Enable, bool RightHandWand, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SetPlayerWandVisibility");

	Params::IIBPChar_Player_C_SetPlayerWandVisibility_Params Parms{};

	Parms.Enable = Enable;
	Parms.RightHandWand = RightHandWand;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetPlayerClasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         Primary                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         Secondary                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetPlayerClasses(enum class EOakPlayerClass* Primary, enum class EOakPlayerClass* Secondary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetPlayerClasses");

	Params::IIBPChar_Player_C_GetPlayerClasses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Primary != nullptr)
		*Primary = Parms.Primary;

	if (Secondary != nullptr)
		*Secondary = Parms.Secondary;

}


// Function IBPChar_Player.IBPChar_Player_C.GetSecondaryPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetSecondaryPlayerClass(enum class EOakPlayerClass* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetSecondaryPlayerClass");

	Params::IIBPChar_Player_C_GetSecondaryPlayerClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetPrimaryPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetPrimaryPlayerClass(enum class EOakPlayerClass* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetPrimaryPlayerClass");

	Params::IIBPChar_Player_C_GetPrimaryPlayerClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.SpawnPlayerParticleSystemAtLocationMulticast
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  EmitterTransform                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    Res                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::SpawnPlayerParticleSystemAtLocationMulticast(class UParticleSystem* EmitterTemplate, const struct FTransform& EmitterTransform, class UParticleSystemComponent** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SpawnPlayerParticleSystemAtLocationMulticast");

	Params::IIBPChar_Player_C_SpawnPlayerParticleSystemAtLocationMulticast_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.EmitterTransform = EmitterTransform;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetActionSkillWeapons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent*   Action_Skill_Weapon_1st                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   Action_Skill_Weapon_3rd                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetActionSkillWeapons(class UGbxSkeletalMeshComponent** Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent** Action_Skill_Weapon_3rd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetActionSkillWeapons");

	Params::IIBPChar_Player_C_GetActionSkillWeapons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Action_Skill_Weapon_1st != nullptr)
		*Action_Skill_Weapon_1st = Parms.Action_Skill_Weapon_1st;

	if (Action_Skill_Weapon_3rd != nullptr)
		*Action_Skill_Weapon_3rd = Parms.Action_Skill_Weapon_3rd;

}


// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponVisibility
// (NetReliable, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::SetActionSkillWeaponVisibility(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SetActionSkillWeaponVisibility");

	Params::IIBPChar_Player_C_SetActionSkillWeaponVisibility_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponMesh
// (NetReliable, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::SetActionSkillWeaponMesh(class USkeletalMesh* SkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "SetActionSkillWeaponMesh");

	Params::IIBPChar_Player_C_SetActionSkillWeaponMesh_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IBPChar_Player.IBPChar_Player_C.GetGameInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::GetGameInstance(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetGameInstance");

	Params::IIBPChar_Player_C_GetGameInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetTotalCompanionsAndSummonedUnits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetTotalCompanionsAndSummonedUnits(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetTotalCompanionsAndSummonedUnits");

	Params::IIBPChar_Player_C_GetTotalCompanionsAndSummonedUnits_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetTotalSummonedUnits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetTotalSummonedUnits(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetTotalSummonedUnits");

	Params::IIBPChar_Player_C_GetTotalSummonedUnits_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetTotalCompanions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetTotalCompanions(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetTotalCompanions");

	Params::IIBPChar_Player_C_GetTotalCompanions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.GetClassFeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIBPChar_Player_C::GetClassFeat(enum class EOakPlayerClass Class, class UGbxAbility** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "GetClassFeat");

	Params::IIBPChar_Player_C_GetClassFeat_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_Player.IBPChar_Player_C.HasPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_Player_C::HasPlayerClass(enum class EOakPlayerClass Class, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_Player_C", "HasPlayerClass");

	Params::IIBPChar_Player_C_HasPlayerClass_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


