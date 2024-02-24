#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_Redacted.BP_Achievement_Redacted_C
// (Actor)

class UClass* ABP_Achievement_Redacted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_Redacted_C");

	return Clss;
}


// BP_Achievement_Redacted_C BP_Achievement_Redacted.Default__BP_Achievement_Redacted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_Redacted_C* ABP_Achievement_Redacted_C::GetDefaultObj()
{
	static class ABP_Achievement_Redacted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_Redacted_C*>(ABP_Achievement_Redacted_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.CheckIfEquippedGear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGoatEggplantEquipped_Equipped                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGoatSkinEquipped_Equipped                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievement_Redacted_C::CheckIfEquippedGear(class AGGGoat* Goat, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_HasGoatEggplantEquipped_Equipped, bool CallFunc_HasGoatSkinEquipped_Equipped, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "CheckIfEquippedGear");

	Params::ABP_Achievement_Redacted_C_CheckIfEquippedGear_Params Parms{};

	Parms.Goat = Goat;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_1 = CallFunc_GetGGPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_HasGoatEggplantEquipped_Equipped = CallFunc_HasGoatEggplantEquipped_Equipped;
	Parms.CallFunc_HasGoatSkinEquipped_Equipped = CallFunc_HasGoatSkinEquipped_Equipped;
	Parms.CallFunc_GetCurrentAltGoat_ReturnValue = CallFunc_GetCurrentAltGoat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.HasGoatEggplantEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Equipped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatGearManager*          CallFunc_GetGearManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetGearOnSlot_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGGGoatGearInterface>K2Node_DynamicCast_AsGGGoat_Gear_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGoatGearData               CallFunc_GetGearData_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievement_Redacted_C::HasGoatEggplantEquipped(class AGGGoat* Goat, bool* Equipped, class UGGGoatGearManager* CallFunc_GetGearManager_ReturnValue, class USceneComponent* CallFunc_GetGearOnSlot_ReturnValue, TScriptInterface<class IGGGoatGearInterface> K2Node_DynamicCast_AsGGGoat_Gear_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGoatGearData& CallFunc_GetGearData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "HasGoatEggplantEquipped");

	Params::ABP_Achievement_Redacted_C_HasGoatEggplantEquipped_Params Parms{};

	Parms.Goat = Goat;
	Parms.CallFunc_GetGearManager_ReturnValue = CallFunc_GetGearManager_ReturnValue;
	Parms.CallFunc_GetGearOnSlot_ReturnValue = CallFunc_GetGearOnSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat_Gear_Interface = K2Node_DynamicCast_AsGGGoat_Gear_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGearData_ReturnValue = CallFunc_GetGearData_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Equipped != nullptr)
		*Equipped = Parms.Equipped;

}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.HasGoatSkinEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Equipped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatGearManager*          CallFunc_GetGearManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetGearOnSlot_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGGGoatGearInterface>K2Node_DynamicCast_AsGGGoat_Gear_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGoatGearData               CallFunc_GetGearData_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievement_Redacted_C::HasGoatSkinEquipped(class AGGGoat* Goat, bool* Equipped, class UGGGoatGearManager* CallFunc_GetGearManager_ReturnValue, class USceneComponent* CallFunc_GetGearOnSlot_ReturnValue, TScriptInterface<class IGGGoatGearInterface> K2Node_DynamicCast_AsGGGoat_Gear_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGoatGearData& CallFunc_GetGearData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "HasGoatSkinEquipped");

	Params::ABP_Achievement_Redacted_C_HasGoatSkinEquipped_Params Parms{};

	Parms.Goat = Goat;
	Parms.CallFunc_GetGearManager_ReturnValue = CallFunc_GetGearManager_ReturnValue;
	Parms.CallFunc_GetGearOnSlot_ReturnValue = CallFunc_GetGearOnSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat_Gear_Interface = K2Node_DynamicCast_AsGGGoat_Gear_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGearData_ReturnValue = CallFunc_GetGearData_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Equipped != nullptr)
		*Equipped = Parms.Equipped;

}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_Redacted_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_Redacted_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "ReceiveTick");

	Params::ABP_Achievement_Redacted_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.OnLocalGearEquip
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class USceneComponent>>GearEquipped                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Achievement_Redacted_C::OnLocalGearEquip(class AGGGoat* Goat, TArray<TSubclassOf<class USceneComponent>>& GearEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "OnLocalGearEquip");

	Params::ABP_Achievement_Redacted_C_OnLocalGearEquip_Params Parms{};

	Parms.Goat = Goat;
	Parms.GearEquipped = GearEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_Redacted.BP_Achievement_Redacted_C.ExecuteUbergraph_BP_Achievement_Redacted
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class USceneComponent>>K2Node_CustomEvent_GearEquipped                                  (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_Redacted_C::ExecuteUbergraph_BP_Achievement_Redacted(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_Goat, TArray<TSubclassOf<class USceneComponent>>& K2Node_CustomEvent_GearEquipped, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Redacted_C", "ExecuteUbergraph_BP_Achievement_Redacted");

	Params::ABP_Achievement_Redacted_C_ExecuteUbergraph_BP_Achievement_Redacted_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.K2Node_CustomEvent_GearEquipped = K2Node_CustomEvent_GearEquipped;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControlledGoat_ReturnValue = CallFunc_GetControlledGoat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


