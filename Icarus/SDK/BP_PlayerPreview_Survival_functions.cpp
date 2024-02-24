#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C
// (Actor)

class UClass* ABP_PlayerPreview_Survival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerPreview_Survival_C");

	return Clss;
}


// BP_PlayerPreview_Survival_C BP_PlayerPreview_Survival.Default__BP_PlayerPreview_Survival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerPreview_Survival_C* ABP_PlayerPreview_Survival_C::GetDefaultObj()
{
	static class ABP_PlayerPreview_Survival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerPreview_Survival_C*>(ABP_PlayerPreview_Survival_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.On Connected Player Initialised
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreview_Survival_C::On_Connected_Player_Initialised(struct FConnectedPlayer& ConnectedPlayer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_Survival_C", "On Connected Player Initialised");

	Params::ABP_PlayerPreview_Survival_C_On_Connected_Player_Initialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.RefreshPlayerCosmetics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasActiveCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)

void ABP_PlayerPreview_Survival_C::RefreshPlayerCosmetics(bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasActiveCharacter_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_Survival_C", "RefreshPlayerCosmetics");

	Params::ABP_PlayerPreview_Survival_C_RefreshPlayerCosmetics_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasActiveCharacter_ReturnValue = CallFunc_HasActiveCharacter_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.SetPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      InPlayer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreview_Survival_C::SetPlayer(class AIcarusPlayerCharacter* InPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_Survival_C", "SetPlayer");

	Params::ABP_PlayerPreview_Survival_C_SetPlayer_Params Parms{};

	Parms.InPlayer = InPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.ConstructPlayerMeshArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMesh*>       MeshArray                                                        (Parm, OutParm)
// TArray<TSoftClassPtr<class UAnimInstance>>MeshAnimBPs                                                      (Parm, OutParm)
// class USkeletalMesh*               BodyMesh                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetPlayer_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMesh*>       CallFunc_ConstructPlayerMeshArray_MeshArray                      (ReferenceParm)
// TArray<TSoftClassPtr<class UAnimInstance>>CallFunc_ConstructPlayerMeshArray_MeshAnimBPs                    (ReferenceParm)
// class USkeletalMesh*               CallFunc_ConstructPlayerMeshArray_BodyMesh                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetThirdPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreview_Survival_C::ConstructPlayerMeshArray(TArray<class USkeletalMesh*>* MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>* MeshAnimBPs, class USkeletalMesh** BodyMesh, class AIcarusPlayerCharacter* CallFunc_GetPlayer_Player, TArray<class USkeletalMesh*>& CallFunc_ConstructPlayerMeshArray_MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>& CallFunc_ConstructPlayerMeshArray_MeshAnimBPs, class USkeletalMesh* CallFunc_ConstructPlayerMeshArray_BodyMesh, class USkeletalMeshComponent* CallFunc_GetThirdPersonMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_Survival_C", "ConstructPlayerMeshArray");

	Params::ABP_PlayerPreview_Survival_C_ConstructPlayerMeshArray_Params Parms{};

	Parms.CallFunc_GetPlayer_Player = CallFunc_GetPlayer_Player;
	Parms.CallFunc_ConstructPlayerMeshArray_MeshArray = CallFunc_ConstructPlayerMeshArray_MeshArray;
	Parms.CallFunc_ConstructPlayerMeshArray_MeshAnimBPs = CallFunc_ConstructPlayerMeshArray_MeshAnimBPs;
	Parms.CallFunc_ConstructPlayerMeshArray_BodyMesh = CallFunc_ConstructPlayerMeshArray_BodyMesh;
	Parms.CallFunc_GetThirdPersonMesh_ReturnValue = CallFunc_GetThirdPersonMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshArray != nullptr)
		*MeshArray = std::move(Parms.MeshArray);

	if (MeshAnimBPs != nullptr)
		*MeshAnimBPs = std::move(Parms.MeshAnimBPs);

	if (BodyMesh != nullptr)
		*BodyMesh = Parms.BodyMesh;

}


// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.UpdatePreviewVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPreview_Survival_C::UpdatePreviewVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_Survival_C", "UpdatePreviewVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.ResolveVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInventoryVisibile_Visible                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreview_Survival_C::ResolveVisibility(bool* Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInventoryVisibile_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_Survival_C", "ResolveVisibility");

	Params::ABP_PlayerPreview_Survival_C_ResolveVisibility_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInventoryVisibile_Visible = CallFunc_IsInventoryVisibile_Visible;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}

}


