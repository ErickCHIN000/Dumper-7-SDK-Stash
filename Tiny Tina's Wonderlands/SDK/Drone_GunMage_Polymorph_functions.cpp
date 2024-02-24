#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C
// (Actor)

class UClass* ADrone_GunMage_Polymorph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Drone_GunMage_Polymorph_C");

	return Clss;
}


// Drone_GunMage_Polymorph_C Drone_GunMage_Polymorph.Default__Drone_GunMage_Polymorph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrone_GunMage_Polymorph_C* ADrone_GunMage_Polymorph_C::GetDefaultObj()
{
	static class ADrone_GunMage_Polymorph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrone_GunMage_Polymorph_C*>(ADrone_GunMage_Polymorph_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.HandleLegendarySpells
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        DuplicateSpellOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 DuplicateSpellMod                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NormalCast                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CastSpellNormally                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_GunMage_Polymorph_C::HandleLegendarySpells(class AOakCharacter_Player* DuplicateSpellOwner, class AGrenadeMod* DuplicateSpellMod, bool* NormalCast, bool CastSpellNormally, bool CallFunc_DoesSpellHavePart_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue1, bool CallFunc_DoesSpellHavePart_ReturnValue2, bool CallFunc_DoesSpellHavePart_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "HandleLegendarySpells");

	Params::ADrone_GunMage_Polymorph_C_HandleLegendarySpells_Params Parms{};

	Parms.DuplicateSpellOwner = DuplicateSpellOwner;
	Parms.DuplicateSpellMod = DuplicateSpellMod;
	Parms.CastSpellNormally = CastSpellNormally;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue = CallFunc_DoesSpellHavePart_ReturnValue;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue1 = CallFunc_DoesSpellHavePart_ReturnValue1;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue2 = CallFunc_DoesSpellHavePart_ReturnValue2;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue3 = CallFunc_DoesSpellHavePart_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (NormalCast != nullptr)
		*NormalCast = Parms.NormalCast;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.GetDroneOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      DroneOwner                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::GetDroneOwner(class AActor** DroneOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "GetDroneOwner");

	Params::ADrone_GunMage_Polymorph_C_GetDroneOwner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DroneOwner != nullptr)
		*DroneOwner = Parms.DroneOwner;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.GetUIName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGbxUIName*                  Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTagContainerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface5               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface6               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface7               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface8               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface9               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue8                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue9                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface10              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface11              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue10                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue11                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface12              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue12                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_GunMage_Polymorph_C::GetUIName(class UGbxUIName** Res, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, class AActor* CallFunc_GetOwner_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, bool CallFunc_HasMatchingGameplayTag_ReturnValue3, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4, bool K2Node_DynamicCast_bSuccess4, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface5, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_HasMatchingGameplayTag_ReturnValue4, bool CallFunc_HasMatchingGameplayTag_ReturnValue5, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface6, bool K2Node_DynamicCast_bSuccess6, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface7, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_HasMatchingGameplayTag_ReturnValue6, bool CallFunc_HasMatchingGameplayTag_ReturnValue7, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface8, bool K2Node_DynamicCast_bSuccess8, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface9, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_HasMatchingGameplayTag_ReturnValue8, bool CallFunc_HasMatchingGameplayTag_ReturnValue9, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface10, bool K2Node_DynamicCast_bSuccess10, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface11, bool K2Node_DynamicCast_bSuccess11, bool CallFunc_HasMatchingGameplayTag_ReturnValue10, bool CallFunc_HasMatchingGameplayTag_ReturnValue11, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface12, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_HasMatchingGameplayTag_ReturnValue12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "GetUIName");

	Params::ADrone_GunMage_Polymorph_C_GetUIName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue1 = CallFunc_HasMatchingGameplayTag_ReturnValue1;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue2 = CallFunc_HasMatchingGameplayTag_ReturnValue2;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue3 = CallFunc_HasMatchingGameplayTag_ReturnValue3;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface5 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface5;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue4 = CallFunc_HasMatchingGameplayTag_ReturnValue4;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue5 = CallFunc_HasMatchingGameplayTag_ReturnValue5;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface6 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface6;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface7 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface7;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue6 = CallFunc_HasMatchingGameplayTag_ReturnValue6;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue7 = CallFunc_HasMatchingGameplayTag_ReturnValue7;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface8 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface8;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface9 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface9;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue8 = CallFunc_HasMatchingGameplayTag_ReturnValue8;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue9 = CallFunc_HasMatchingGameplayTag_ReturnValue9;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface10 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface10;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface11 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface11;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue10 = CallFunc_HasMatchingGameplayTag_ReturnValue10;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue11 = CallFunc_HasMatchingGameplayTag_ReturnValue11;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface12 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface12;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue12 = CallFunc_HasMatchingGameplayTag_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.OnRep_SpellReady
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void ADrone_GunMage_Polymorph_C::OnRep_SpellReady(float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "OnRep_SpellReady");

	Params::ADrone_GunMage_Polymorph_C_OnRep_SpellReady_Params Parms{};

	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.PlayCompanionDespawnEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_GunMage_Polymorph_C::PlayCompanionDespawnEffects(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "PlayCompanionDespawnEffects");

	Params::ADrone_GunMage_Polymorph_C_PlayCompanionDespawnEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.PlayCompanionSpawnEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_GunMage_Polymorph_C::PlayCompanionSpawnEffects(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "PlayCompanionSpawnEffects");

	Params::ADrone_GunMage_Polymorph_C_PlayCompanionSpawnEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.SetNewHoverTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindNewHoverTarget_Res                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_GunMage_Polymorph_C::SetNewHoverTarget(bool* Res, class AActor* CallFunc_GetDroneOwner_DroneOwner, class AActor* CallFunc_FindNewHoverTarget_Res, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "SetNewHoverTarget");

	Params::ADrone_GunMage_Polymorph_C_SetNewHoverTarget_Params Parms{};

	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_FindNewHoverTarget_Res = CallFunc_FindNewHoverTarget_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.FindNewHoverTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              TargetList                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::FindNewHoverTarget(class AActor** Res, const TArray<class AActor*>& TargetList, class APawn* CallFunc_GetInstigator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "FindNewHoverTarget");

	Params::ADrone_GunMage_Polymorph_C_FindNewHoverTarget_Params Parms{};

	Parms.TargetList = TargetList;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Duplicate_TimeSkip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        SpellOwnerDuplicate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 SpellModDuplicate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::Duplicate_TimeSkip(class AOakCharacter_Player* SpellOwnerDuplicate, class AGrenadeMod* SpellModDuplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Duplicate_TimeSkip");

	Params::ADrone_GunMage_Polymorph_C_Duplicate_TimeSkip_Params Parms{};

	Parms.SpellOwnerDuplicate = SpellOwnerDuplicate;
	Parms.SpellModDuplicate = SpellModDuplicate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.TimeSkip_StartCasting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::TimeSkip_StartCasting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "TimeSkip_StartCasting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Duplicate_LaserHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        SpellOwnerDuplicate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 SpellModDuplicate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::Duplicate_LaserHand(class AOakCharacter_Player* SpellOwnerDuplicate, class AGrenadeMod* SpellModDuplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Duplicate_LaserHand");

	Params::ADrone_GunMage_Polymorph_C_Duplicate_LaserHand_Params Parms{};

	Parms.SpellOwnerDuplicate = SpellOwnerDuplicate;
	Parms.SpellModDuplicate = SpellModDuplicate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Duplicate_Westerspell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        SpellOwnerDuplicate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 SpellModDuplicate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::Duplicate_Westerspell(class AOakCharacter_Player* SpellOwnerDuplicate, class AGrenadeMod* SpellModDuplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Duplicate_Westerspell");

	Params::ADrone_GunMage_Polymorph_C_Duplicate_Westerspell_Params Parms{};

	Parms.SpellOwnerDuplicate = SpellOwnerDuplicate;
	Parms.SpellModDuplicate = SpellModDuplicate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ContinueSawblades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::ContinueSawblades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ContinueSawblades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ResetSawblades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::ResetSawblades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ResetSawblades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Duplicate_Sawblades
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        SpellOwnerDuplicate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 SpellModDuplicate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::Duplicate_Sawblades(class AOakCharacter_Player* SpellOwnerDuplicate, class AGrenadeMod* SpellModDuplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Duplicate_Sawblades");

	Params::ADrone_GunMage_Polymorph_C_Duplicate_Sawblades_Params Parms{};

	Parms.SpellOwnerDuplicate = SpellOwnerDuplicate;
	Parms.SpellModDuplicate = SpellModDuplicate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Duplicate_Tidebreaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        SpellOwnerDuplicate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 SpellModDuplicate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::Duplicate_Tidebreaker(class AOakCharacter_Player* SpellOwnerDuplicate, class AGrenadeMod* SpellModDuplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Duplicate_Tidebreaker");

	Params::ADrone_GunMage_Polymorph_C_Duplicate_Tidebreaker_Params Parms{};

	Parms.SpellOwnerDuplicate = SpellOwnerDuplicate;
	Parms.SpellModDuplicate = SpellModDuplicate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.LookForTargets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::LookForTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "LookForTargets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.InitSelfBalance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::InitSelfBalance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "InitSelfBalance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.PolymorphCastSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Caster                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::PolymorphCastSpell(class AActor* Caster)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "PolymorphCastSpell");

	Params::ADrone_GunMage_Polymorph_C_PolymorphCastSpell_Params Parms{};

	Parms.Caster = Caster;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_GunMage_Polymorph
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ADrone_GunMage_Polymorph_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_GunMage_Polymorph(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_GunMage_Polymorph");

	Params::ADrone_GunMage_Polymorph_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_GunMage_Polymorph_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ReadyPolymorphSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::ReadyPolymorphSpell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ReadyPolymorphSpell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.TrackCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TrackStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_GunMage_Polymorph_C::TrackCompanion(bool TrackStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "TrackCompanion");

	Params::ADrone_GunMage_Polymorph_C_TrackCompanion_Params Parms{};

	Parms.TrackStatus = TrackStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Audio_Despawn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::Audio_Despawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Audio_Despawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.Audio_Despawn_Death
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::Audio_Despawn_Death()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "Audio_Despawn_Death");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent
// (BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent");

	Params::ADrone_GunMage_Polymorph_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ShouldDespawnCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_GunMage_Polymorph_C::ShouldDespawnCompanion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ShouldDespawnCompanion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.StopDuplicatedSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        DuplicateSpellOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 DuplicateSpellMod                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::StopDuplicatedSpell(class AOakCharacter_Player* DuplicateSpellOwner, class AGrenadeMod* DuplicateSpellMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "StopDuplicatedSpell");

	Params::ADrone_GunMage_Polymorph_C_StopDuplicatedSpell_Params Parms{};

	Parms.DuplicateSpellOwner = DuplicateSpellOwner;
	Parms.DuplicateSpellMod = DuplicateSpellMod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_GunMage_Polymorph.Drone_GunMage_Polymorph_C.ExecuteUbergraph_Drone_GunMage_Polymorph
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_TimeSkip_C*         K2Node_DynamicCast_AsAbility_Time_Skip                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_CustomEvent_SpellOwnerDuplicate3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_CustomEvent_SpellModDuplicate3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue1                         (IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_CustomEvent_SpellOwnerDuplicate2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_CustomEvent_SpellModDuplicate2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_CustomEvent_SpellOwnerDuplicate1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_CustomEvent_SpellModDuplicate1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue2                         (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_CustomEvent_SpellOwnerDuplicate4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_CustomEvent_SpellModDuplicate4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_CustomEvent_SpellOwnerDuplicate                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_CustomEvent_SpellModDuplicate                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue3                         (IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetNewHoverTarget_Res                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetNewHoverTarget_Res1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Caster                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Damage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_ComponentBoundEvent_DamageType                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_ComponentBoundEvent_DamageSource                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_ComponentBoundEvent_InstigatedBy                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      K2Node_ComponentBoundEvent_Details                               (ContainsInstancedReference)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_DynamicCast_AsGrenade_Mod                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetValueOfAttributeAsInteger_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleLegendarySpells_NormalCast                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetAssociatedCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_GunMage_C>K2Node_DynamicCast_AsIFeat_Gun_Mage                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddSpellweavingStacks_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue1                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_GunMage_C>K2Node_DynamicCast_AsIFeat_Gun_Mage1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSpellweavingStacks_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_TrackStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class AActor*                      K2Node_Event_DamageReceiver                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIActionSkill_GunMage_Polymorph_C>K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PolymorphSetFailedToFindTarget_Res                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDurationPercent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameResourceData*           CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourcePoolManagerComponent*CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRangedDistanceOverrides    K2Node_MakeStruct_RangedDistanceOverrides                        (NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_CustomEvent_DuplicateSpellOwner                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_CustomEvent_DuplicateSpellMod                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorBounds_Origin1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_GunMage_Polymorph_C::ExecuteUbergraph_Drone_GunMage_Polymorph(int32 EntryPoint, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_TimeSkip_C* K2Node_DynamicCast_AsAbility_Time_Skip, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AOakCharacter_Player* K2Node_CustomEvent_SpellOwnerDuplicate3, class AGrenadeMod* K2Node_CustomEvent_SpellModDuplicate3, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, class AOakCharacter_Player* K2Node_CustomEvent_SpellOwnerDuplicate2, class AGrenadeMod* K2Node_CustomEvent_SpellModDuplicate2, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class AOakCharacter_Player* K2Node_CustomEvent_SpellOwnerDuplicate1, class AGrenadeMod* K2Node_CustomEvent_SpellModDuplicate1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class AOakCharacter_Player* K2Node_CustomEvent_SpellOwnerDuplicate4, class AGrenadeMod* K2Node_CustomEvent_SpellModDuplicate4, class AOakCharacter_Player* K2Node_CustomEvent_SpellOwnerDuplicate, class AGrenadeMod* K2Node_CustomEvent_SpellModDuplicate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue3, bool CallFunc_SetNewHoverTarget_Res, bool CallFunc_SetNewHoverTarget_Res1, class AActor* K2Node_CustomEvent_Caster, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, float K2Node_ComponentBoundEvent_Damage, class UGbxDamageType* K2Node_ComponentBoundEvent_DamageType, class UDamageSource* K2Node_ComponentBoundEvent_DamageSource, class AController* K2Node_ComponentBoundEvent_InstigatedBy, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_ComponentBoundEvent_Details, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess2, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, bool CallFunc_HandleLegendarySpells_NormalCast, bool K2Node_SwitchInteger_CmpSuccess, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_Array_RemoveItem_ReturnValue, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess4, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_AddSpellweavingStacks_Res, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_RandomIntegerInRange_ReturnValue1, class AActor* CallFunc_Array_Get_Item1, const struct FTransform& CallFunc_GetTransform_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess5, class UGbxAbility* CallFunc_GetClassFeat_Res1, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage1, bool K2Node_DynamicCast_bSuccess6, int32 CallFunc_GetSpellweavingStacks_Res, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_RandomBoolWithWeight_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess7, int32 CallFunc_Add_IntInt_ReturnValue1, class AActor* CallFunc_GetDroneOwner_DroneOwner, bool K2Node_Event_TrackStatus, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AActor* K2Node_Event_DamageReceiver, class AActor* K2Node_Event_DamageCauser, class AActor* CallFunc_GetDroneOwner_DroneOwner1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, int32 Temp_int_Variable, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, int32 Temp_int_Variable1, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_PolymorphSetFailedToFindTarget_Res, float CallFunc_GetDurationPercent_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool Temp_bool_IsClosed_Variable1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, class UGameResourceData* CallFunc_Array_Get_Item2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue2, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Add_FloatFloat_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable1, const struct FRangedDistanceOverrides& K2Node_MakeStruct_RangedDistanceOverrides, bool CallFunc_Array_RemoveItem_ReturnValue1, class AOakCharacter_Player* K2Node_CustomEvent_DuplicateSpellOwner, class AGrenadeMod* K2Node_CustomEvent_DuplicateSpellMod, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, const struct FVector& CallFunc_GetActorBounds_Origin1, const struct FVector& CallFunc_GetActorBounds_BoxExtent1, bool CallFunc_BooleanAND_ReturnValue3, float CallFunc_VSize_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_GunMage_Polymorph_C", "ExecuteUbergraph_Drone_GunMage_Polymorph");

	Params::ADrone_GunMage_Polymorph_C_ExecuteUbergraph_Drone_GunMage_Polymorph_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbility_Time_Skip = K2Node_DynamicCast_AsAbility_Time_Skip;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_CustomEvent_SpellOwnerDuplicate3 = K2Node_CustomEvent_SpellOwnerDuplicate3;
	Parms.K2Node_CustomEvent_SpellModDuplicate3 = K2Node_CustomEvent_SpellModDuplicate3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue1 = CallFunc_GetSocketTransform_ReturnValue1;
	Parms.K2Node_CustomEvent_SpellOwnerDuplicate2 = K2Node_CustomEvent_SpellOwnerDuplicate2;
	Parms.K2Node_CustomEvent_SpellModDuplicate2 = K2Node_CustomEvent_SpellModDuplicate2;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.K2Node_CustomEvent_SpellOwnerDuplicate1 = K2Node_CustomEvent_SpellOwnerDuplicate1;
	Parms.K2Node_CustomEvent_SpellModDuplicate1 = K2Node_CustomEvent_SpellModDuplicate1;
	Parms.CallFunc_GetSocketTransform_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_CustomEvent_SpellOwnerDuplicate4 = K2Node_CustomEvent_SpellOwnerDuplicate4;
	Parms.K2Node_CustomEvent_SpellModDuplicate4 = K2Node_CustomEvent_SpellModDuplicate4;
	Parms.K2Node_CustomEvent_SpellOwnerDuplicate = K2Node_CustomEvent_SpellOwnerDuplicate;
	Parms.K2Node_CustomEvent_SpellModDuplicate = K2Node_CustomEvent_SpellModDuplicate;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSocketTransform_ReturnValue3 = CallFunc_GetSocketTransform_ReturnValue3;
	Parms.CallFunc_SetNewHoverTarget_Res = CallFunc_SetNewHoverTarget_Res;
	Parms.CallFunc_SetNewHoverTarget_Res1 = CallFunc_SetNewHoverTarget_Res1;
	Parms.K2Node_CustomEvent_Caster = K2Node_CustomEvent_Caster;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_Damage = K2Node_ComponentBoundEvent_Damage;
	Parms.K2Node_ComponentBoundEvent_DamageType = K2Node_ComponentBoundEvent_DamageType;
	Parms.K2Node_ComponentBoundEvent_DamageSource = K2Node_ComponentBoundEvent_DamageSource;
	Parms.K2Node_ComponentBoundEvent_InstigatedBy = K2Node_ComponentBoundEvent_InstigatedBy;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.K2Node_ComponentBoundEvent_Details = K2Node_ComponentBoundEvent_Details;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsGrenade_Mod = K2Node_DynamicCast_AsGrenade_Mod;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;
	Parms.CallFunc_GetValueOfAttributeAsInteger_ReturnValue = CallFunc_GetValueOfAttributeAsInteger_ReturnValue;
	Parms.CallFunc_HandleLegendarySpells_NormalCast = CallFunc_HandleLegendarySpells_NormalCast;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetAssociatedCharacter_ReturnValue = CallFunc_GetAssociatedCharacter_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Gun_Mage = K2Node_DynamicCast_AsIFeat_Gun_Mage;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_AddSpellweavingStacks_Res = CallFunc_AddSpellweavingStacks_Res;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1 = CallFunc_RandomIntegerInRange_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetTransform_ReturnValue1 = CallFunc_GetTransform_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetClassFeat_Res1 = CallFunc_GetClassFeat_Res1;
	Parms.K2Node_DynamicCast_AsIFeat_Gun_Mage1 = K2Node_DynamicCast_AsIFeat_Gun_Mage1;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_GetSpellweavingStacks_Res = CallFunc_GetSpellweavingStacks_Res;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.K2Node_Event_TrackStatus = K2Node_Event_TrackStatus;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.K2Node_Event_DamageReceiver = K2Node_Event_DamageReceiver;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.CallFunc_GetDroneOwner_DroneOwner1 = CallFunc_GetDroneOwner_DroneOwner1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph = K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_PolymorphSetFailedToFindTarget_Res = CallFunc_PolymorphSetFailedToFindTarget_Res;
	Parms.CallFunc_GetDurationPercent_ReturnValue = CallFunc_GetDurationPercent_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.K2Node_MakeStruct_RangedDistanceOverrides = K2Node_MakeStruct_RangedDistanceOverrides;
	Parms.CallFunc_Array_RemoveItem_ReturnValue1 = CallFunc_Array_RemoveItem_ReturnValue1;
	Parms.K2Node_CustomEvent_DuplicateSpellOwner = K2Node_CustomEvent_DuplicateSpellOwner;
	Parms.K2Node_CustomEvent_DuplicateSpellMod = K2Node_CustomEvent_DuplicateSpellMod;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue3 = CallFunc_EqualEqual_ObjectObject_ReturnValue3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue1 = CallFunc_GetActorUpVector_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetActorBounds_Origin1 = CallFunc_GetActorBounds_Origin1;
	Parms.CallFunc_GetActorBounds_BoxExtent1 = CallFunc_GetActorBounds_BoxExtent1;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue1 = CallFunc_VSize_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


