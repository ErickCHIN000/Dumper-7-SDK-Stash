#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBoss.BP_ZombieBoss_C
// (Actor, Pawn)

class UClass* ABP_ZombieBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBoss_C");

	return Clss;
}


// BP_ZombieBoss_C BP_ZombieBoss.Default__BP_ZombieBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBoss_C* ABP_ZombieBoss_C::GetDefaultObj()
{
	static class ABP_ZombieBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBoss_C*>(ABP_ZombieBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZombieBoss.BP_ZombieBoss_C.GetMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MarkerOffset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "GetMarker");

	Params::ABP_ZombieBoss_C_GetMarker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (MarkerOffset != nullptr)
		*MarkerOffset = Parms.MarkerOffset;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.CanAddMarkerToAI?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdd_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::CanAddMarkerToAI_(bool* CanAdd_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "CanAddMarkerToAI?");

	Params::ABP_ZombieBoss_C_CanAddMarkerToAI__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanAdd_ != nullptr)
		*CanAdd_ = Parms.CanAdd_;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::GetMesh(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "GetMesh");

	Params::ABP_ZombieBoss_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.CanStompAI?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Stomp_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::CanStompAI_(bool* Stomp_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "CanStompAI?");

	Params::ABP_ZombieBoss_C_CanStompAI__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Stomp_ != nullptr)
		*Stomp_ = Parms.Stomp_;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.GetMovementSpeeds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RoamingSpeed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AlertSpeed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AttackSpeed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::GetMovementSpeeds(double* RoamingSpeed, double* AlertSpeed, double* AttackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "GetMovementSpeeds");

	Params::ABP_ZombieBoss_C_GetMovementSpeeds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RoamingSpeed != nullptr)
		*RoamingSpeed = Parms.RoamingSpeed;

	if (AlertSpeed != nullptr)
		*AlertSpeed = Parms.AlertSpeed;

	if (AttackSpeed != nullptr)
		*AttackSpeed = Parms.AttackSpeed;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AIHealthBarInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Boss_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AIHealthBarInfo(class FString* Name, bool* Boss_, class AHUD_Game_C* CallFunc_GetHUD_HUD, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AIHealthBarInfo");

	Params::ABP_ZombieBoss_C_AIHealthBarInfo_Params Parms{};

	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Boss_ != nullptr)
		*Boss_ = Parms.Boss_;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Is Dead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Dead                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AI_Is_Dead_(bool* Dead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Is Dead?");

	Params::ABP_ZombieBoss_C_AI_Is_Dead__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dead != nullptr)
		*Dead = Parms.Dead;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Can Interact?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Interact                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AI_Can_Interact_(bool* Can_Interact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Can Interact?");

	Params::ABP_ZombieBoss_C_AI_Can_Interact__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Interact != nullptr)
		*Can_Interact = Parms.Can_Interact;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Actor Attack Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attack_Target                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Actor Attack Target");

	Params::ABP_ZombieBoss_C_Actor_Attack_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attack_Target != nullptr)
		*Attack_Target = Parms.Attack_Target;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.GetInteractOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableContext_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                Options                                                          (Parm, OutParm)
// TArray<class FText>                Stats                                                            (Parm, OutParm)

void ABP_ZombieBoss_C::GetInteractOptions(bool* EnableContext_, TArray<class FText>* Options, TArray<class FText>* Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "GetInteractOptions");

	Params::ABP_ZombieBoss_C_GetInteractOptions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnableContext_ != nullptr)
		*EnableContext_ = Parms.EnableContext_;

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

	if (Stats != nullptr)
		*Stats = std::move(Parms.Stats);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnRequestServerInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnRequestServerInteract(class AActor* Actor, int32 OptionIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnRequestServerInteract");

	Params::ABP_ZombieBoss_C_OnRequestServerInteract_Params Parms{};

	Parms.Actor = Actor;
	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.GetJigMultiplayerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        JigComp                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "GetJigMultiplayerComponent");

	Params::ABP_ZombieBoss_C_GetJigMultiplayerComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JigComp != nullptr)
		*JigComp = Parms.JigComp;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.GetItemInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                  Info                                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        RandomStatsConfig                                                (Parm, OutParm, HasGetValueTypeHash)

void ABP_ZombieBoss_C::GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "GetItemInfo");

	Params::ABP_ZombieBoss_C_GetItemInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

	if (RandomStatsConfig != nullptr)
		*RandomStatsConfig = std::move(Parms.RandomStatsConfig);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigCanInteract(bool* Result, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigCanInteract");

	Params::ABP_ZombieBoss_C_JigCanInteract_Params Parms{};

	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigSetCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnablePhysics                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigSetCanInteract");

	Params::ABP_ZombieBoss_C_JigSetCanInteract_Params Parms{};

	Parms.CanInteract = CanInteract;
	Parms.EnablePhysics = EnablePhysics;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.SetPickupCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::SetPickupCount(int32 NewCount, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "SetPickupCount");

	Params::ABP_ZombieBoss_C_SetPickupCount_Params Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_GetLootWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Result                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Valid_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_GetLootWidget(class UWidget** Result, bool* Valid_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_GetLootWidget");

	Params::ABP_ZombieBoss_C_JigMP_GetLootWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnContainersSwap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             Container1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnContainersSwap(class UJSIContainer_C* Container1, class UJSIContainer_C* Container2, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnContainersSwap");

	Params::ABP_ZombieBoss_C_JigMP_OnContainersSwap_Params Parms{};

	Parms.Container1 = Container1;
	Parms.Container2 = Container2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnItemDropped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnItemDropped(int32 ItemUID, int32 FromContainerUID, class AActor* ActorRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnItemDropped");

	Params::ABP_ZombieBoss_C_JigMP_OnItemDropped_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        ToComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnItemRemoved");

	Params::ABP_ZombieBoss_C_JigMP_OnItemRemoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.ToComponent = ToComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        FromComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnItemAdded");

	Params::ABP_ZombieBoss_C_JigMP_OnItemAdded_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.FromComponent = FromComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnItemMoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnItemMoved");

	Params::ABP_ZombieBoss_C_JigMP_OnItemMoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnMainContainerItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ContainerName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                ItemRemovedInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnMainContainerItemRemoved(int32 FromContainerUID, int32 ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnMainContainerItemRemoved");

	Params::ABP_ZombieBoss_C_JigMP_OnMainContainerItemRemoved_Params Parms{};

	Parms.FromContainerUID = FromContainerUID;
	Parms.ItemUID = ItemUID;
	Parms.ContainerName = ContainerName;
	Parms.ItemRemovedInfo = ItemRemovedInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnMainContainerItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainerName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        FromMain                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnMainContainerItemAdded(int32 TocontainerUID, int32 ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnMainContainerItemAdded");

	Params::ABP_ZombieBoss_C_JigMP_OnMainContainerItemAdded_Params Parms{};

	Parms.TocontainerUID = TocontainerUID;
	Parms.ItemUID = ItemUID;
	Parms.ToContainerName = ToContainerName;
	Parms.ItemInfo = ItemInfo;
	Parms.FromMain = FromMain;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ActorRef != nullptr)
		*ActorRef = Parms.ActorRef;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnPickupAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRepItemInfo                Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnPickupAdded(const struct FRepItemInfo& Info, int32 ItemUID, int32 TocontainerUID, class FName ToContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnPickupAdded");

	Params::ABP_ZombieBoss_C_JigMP_OnPickupAdded_Params Parms{};

	Parms.Info = Info;
	Parms.ItemUID = ItemUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.ToContainer = ToContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnPickupEquipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainerName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnPickupEquipped(class AActor* ActorRef, class FName ToContainerName, int32 UID, int32 TocontainerUID, const struct FRepItemInfo& Info, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnPickupEquipped");

	Params::ABP_ZombieBoss_C_JigMP_OnPickupEquipped_Params Parms{};

	Parms.ActorRef = ActorRef;
	Parms.ToContainerName = ToContainerName;
	Parms.UID = UID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnRequestDropItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRepItemInfo                ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ContainerName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetDtRef_DTReference                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UDataTable* CallFunc_GetDtRef_DTReference, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FFItemInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnRequestDropItem");

	Params::ABP_ZombieBoss_C_JigMP_OnRequestDropItem_Params Parms{};

	Parms.ItemInfo = ItemInfo;
	Parms.ContainerName = ContainerName;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetDtRef_DTReference = CallFunc_GetDtRef_DTReference;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ActorRef != nullptr)
		*ActorRef = Parms.ActorRef;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnItemConsumed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRepItemInfo                ConsumedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Remaining                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                InsideOf                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnItemConsumed(const struct FRepItemInfo& ConsumedItem, int32 Amount, int32 Remaining, const struct FRepItemInfo& InsideOf, class FName FromContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnItemConsumed");

	Params::ABP_ZombieBoss_C_JigMP_OnItemConsumed_Params Parms{};

	Parms.ConsumedItem = ConsumedItem;
	Parms.Amount = Amount;
	Parms.Remaining = Remaining;
	Parms.InsideOf = InsideOf;
	Parms.FromContainer = FromContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnUpdateChamberUID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewUID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnUpdateChamberUID(int32 NewUID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnUpdateChamberUID");

	Params::ABP_ZombieBoss_C_JigMP_OnUpdateChamberUID_Params Parms{};

	Parms.NewUID = NewUID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.JigMP_OnTwoContainersSwap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::JigMP_OnTwoContainersSwap(class FName FromContainer, class FName ToContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "JigMP_OnTwoContainersSwap");

	Params::ABP_ZombieBoss_C_JigMP_OnTwoContainersSwap_Params Parms{};

	Parms.FromContainer = FromContainer;
	Parms.ToContainer = ToContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.RightArmTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::RightArmTrace(TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "RightArmTrace");

	Params::ABP_ZombieBoss_C_RightArmTrace_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit = CallFunc_SphereTraceSingleForObjects_OutHit;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue = CallFunc_SphereTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.LeftArmTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::LeftArmTrace(TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "LeftArmTrace");

	Params::ABP_ZombieBoss_C_LeftArmTrace_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit = CallFunc_SphereTraceSingleForObjects_OutHit;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue = CallFunc_SphereTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.RadiationDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::RadiationDamage(class AActor* Object, double CallFunc_RandomFloatInRange_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "RadiationDamage");

	Params::ABP_ZombieBoss_C_RadiationDamage_Params Parms{};

	Parms.Object = Object;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Change Speed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_MaxWalkSpeed_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Change_Speed(double Speed, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_MaxWalkSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Change Speed");

	Params::ABP_ZombieBoss_C_Change_Speed_Params Parms{};

	Parms.Speed = Speed;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_MaxWalkSpeed_ImplicitCast = K2Node_VariableSet_MaxWalkSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnRep_IsDead?
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IINT_AnimBPPlayer_C>K2Node_DynamicCast_AsINT_Anim_BPPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnRep_IsDead_(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IINT_AnimBPPlayer_C> K2Node_DynamicCast_AsINT_Anim_BPPlayer, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnRep_IsDead?");

	Params::ABP_ZombieBoss_C_OnRep_IsDead__Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsINT_Anim_BPPlayer = K2Node_DynamicCast_AsINT_Anim_BPPlayer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.PlayAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::PlayAttack(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "PlayAttack");

	Params::ABP_ZombieBoss_C_PlayAttack_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.CheckDistanceFromActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnInteractActorOverDistance_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::CheckDistanceFromActor(TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnInteractActorOverDistance_Result, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "CheckDistanceFromActor");

	Params::ABP_ZombieBoss_C_CheckDistanceFromActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface = K2Node_DynamicCast_AsBP_Jig_Character_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnInteractActorOverDistance_Result = CallFunc_OnInteractActorOverDistance_Result;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.SetInteractDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::SetInteractDistance(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "SetInteractDistance");

	Params::ABP_ZombieBoss_C_SetInteractDistance_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::AI_Dead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Dead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Actor Aim Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Actor Aim Focus");

	Params::ABP_ZombieBoss_C_Actor_Aim_Focus_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Alert Actor Defenders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attacked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Alert Actor Defenders");

	Params::ABP_ZombieBoss_C_Alert_Actor_Defenders_Params Parms{};

	Parms.Attacked = Attacked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Turret Destroyed Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Turret_Destroyed_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Turret Destroyed Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Turret Idle Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Turret_Idle_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Turret Idle Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Turret Idle Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Turret_Idle_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Turret Idle Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Turret Start Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Turret_Start_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Turret Start Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Turret End Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Turret_End_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Turret End Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Alert_Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AI_Alert(class AActor* Alert_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Alert");

	Params::ABP_ZombieBoss_C_AI_Alert_Params Parms{};

	Parms.Alert_Actor = Alert_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI End Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::AI_End_Alert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI End Alert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Animation Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AIBehaviour           Behaviour                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AI_Animation_Switch(enum class E_AIBehaviour Behaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Animation Switch");

	Params::ABP_ZombieBoss_C_AI_Animation_Switch_Params Parms{};

	Parms.Behaviour = Behaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Camera Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AI_Camera_Activate(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Camera Activate");

	Params::ABP_ZombieBoss_C_AI_Camera_Activate_Params Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AI Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BlockType             Block_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Block_Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AI Block");

	Params::ABP_ZombieBoss_C_AI_Block_Params Parms{};

	Parms.Block_Type = Block_Type;
	Parms.Block_Attacker = Block_Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnStopExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnStopExecuteInteract(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnStopExecuteInteract");

	Params::ABP_ZombieBoss_C_OnStopExecuteInteract_Params Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnExecuteInteract_Dialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnExecuteInteract_Dialogue(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnExecuteInteract_Dialogue");

	Params::ABP_ZombieBoss_C_OnExecuteInteract_Dialogue_Params Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnServerExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ByActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnServerExecuteInteract");

	Params::ABP_ZombieBoss_C_OnServerExecuteInteract_Params Parms{};

	Parms.OptionIndex = OptionIndex;
	Parms.ByActor = ByActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.SetInteractOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::SetInteractOption(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "SetInteractOption");

	Params::ABP_ZombieBoss_C_SetInteractOption_Params Parms{};

	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Despawn
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Despawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Despawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "ReceiveAnyDamage");

	Params::ABP_ZombieBoss_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Death
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Death(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Death");

	Params::ABP_ZombieBoss_C_Death_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.MeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::MeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "MeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsBeyondLastLayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LayerIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSeen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature");

	Params::ABP_ZombieBoss_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature_Params Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.RangedAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::RangedAttack(const struct FVector& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "RangedAttack");

	Params::ABP_ZombieBoss_C_RangedAttack_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.AddMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::AddMarker(class UWidgetComponent* Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "AddMarker");

	Params::ABP_ZombieBoss_C_AddMarker_Params Parms{};

	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Event_Marker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::Event_Marker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Event_Marker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Event_OnHit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ZombieBoss_C::Event_OnHit(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Event_OnHit");

	Params::ABP_ZombieBoss_C_Event_OnHit_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnExecuteInteractEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::OnExecuteInteractEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnExecuteInteractEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnEndInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBoss_C::OnEndInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnEndInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnExecuteInteract");

	Params::ABP_ZombieBoss_C_OnExecuteInteract_Params Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::OnBeginInteract(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "OnBeginInteract");

	Params::ABP_ZombieBoss_C_OnBeginInteract_Params Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Event_HealthMultiplier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Event_HealthMultiplier(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Event_HealthMultiplier");

	Params::ABP_ZombieBoss_C_Event_HealthMultiplier_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Event_SpeedMultiplier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Event_SpeedMultiplier(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Event_SpeedMultiplier");

	Params::ABP_ZombieBoss_C_Event_SpeedMultiplier_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Event_DamageMultiplier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Event_DamageMultiplier(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Event_DamageMultiplier");

	Params::ABP_ZombieBoss_C_Event_DamageMultiplier_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Outline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Outline(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Outline");

	Params::ABP_ZombieBoss_C_Outline_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.Event_XP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::Event_XP(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "Event_XP");

	Params::ABP_ZombieBoss_C_Event_XP_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBoss.BP_ZombieBoss_C.ExecuteUbergraph_BP_ZombieBoss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacked                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacker                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Alert_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           K2Node_Event_Behaviour                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Activate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BlockType             K2Node_Event_Block_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Block_Attacker                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OptionIndex_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ByActor                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OptionIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Player                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsBeyondLastLayer                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_LayerIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSeen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ScalingDamageMultiplier_NewDmg                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             CallFunc_ScalingDamageMultiplier_NewDmg_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ScalingHealthMultiplier_NewMaxHealth                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ZombieBossRock_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetComponent*            K2Node_Event_Marker                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineOfSightTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OptionIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestServerData_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_SetupInventoryWidget_InventoryWidgetRef                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddJigWidgetToContent_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StoreStats_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StoreStats_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetAchievement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetAchievement_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAIOptimizerSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIOSubjectHandle           CallFunc_K2_DespawnSubject_SubjectHandle                         (NoDestructor)
// bool                               CallFunc_K2_DespawnSubject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddXP_XPOutput                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_C::ExecuteUbergraph_BP_ZombieBoss(int32 EntryPoint, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_Instigator, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, class AActor* K2Node_Event_Alert_Actor, enum class E_AIBehaviour K2Node_Event_Behaviour, bool K2Node_Event_Activate, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, class AActor* K2Node_Event_InteractingActor_3, class AActor* K2Node_Event_InteractingActor_2, int32 K2Node_Event_OptionIndex_2, class AActor* K2Node_Event_ByActor, int32 K2Node_Event_OptionIndex_1, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* K2Node_CustomEvent_Player, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, float CallFunc_PlayAnimMontage_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchInteger_CmpSuccess, class AAIController* CallFunc_GetAIController_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_ScalingDamageMultiplier_NewDmg, TArray<class FName>& K2Node_MakeArray_Array, double CallFunc_ScalingDamageMultiplier_NewDmg_1, double CallFunc_ScalingHealthMultiplier_NewMaxHealth, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& K2Node_CustomEvent_Target, class AAIController* CallFunc_GetAIController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ZombieBossRock_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UWidgetComponent* K2Node_Event_Marker, bool CallFunc_IsValid_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_4, bool CallFunc_LineOfSightTo_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, class AHUD_Game_C* CallFunc_GetHUD_HUD, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_ApplyDamage_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, class AActor* K2Node_Event_InteractingActor_1, int32 K2Node_Event_OptionIndex, class AActor* K2Node_Event_InteractingActor, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_RequestServerData_Result, class UUserWidget* CallFunc_SetupInventoryWidget_InventoryWidgetRef, bool CallFunc_AddJigWidgetToContent_Result, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_CustomEvent_NewValue_4, float K2Node_CustomEvent_NewValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float K2Node_CustomEvent_NewValue_2, bool K2Node_CustomEvent_NewValue_1, bool K2Node_CustomEvent_NewValue, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_StoreStats_ReturnValue, bool CallFunc_StoreStats_ReturnValue_1, bool CallFunc_SetAchievement_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_SetAchievement_ReturnValue_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, class UAIOptimizerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FAIOSubjectHandle& CallFunc_K2_DespawnSubject_SubjectHandle, bool CallFunc_K2_DespawnSubject_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Multiply_IntFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_AddXP_XPOutput, double CallFunc_RandomFloatInRange_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_C", "ExecuteUbergraph_BP_ZombieBoss");

	Params::ABP_ZombieBoss_C_ExecuteUbergraph_BP_ZombieBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_Attacked = K2Node_Event_Attacked;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;
	Parms.K2Node_Event_Alert_Actor = K2Node_Event_Alert_Actor;
	Parms.K2Node_Event_Behaviour = K2Node_Event_Behaviour;
	Parms.K2Node_Event_Activate = K2Node_Event_Activate;
	Parms.K2Node_Event_Block_Type = K2Node_Event_Block_Type;
	Parms.K2Node_Event_Block_Attacker = K2Node_Event_Block_Attacker;
	Parms.K2Node_Event_InteractingActor_3 = K2Node_Event_InteractingActor_3;
	Parms.K2Node_Event_InteractingActor_2 = K2Node_Event_InteractingActor_2;
	Parms.K2Node_Event_OptionIndex_2 = K2Node_Event_OptionIndex_2;
	Parms.K2Node_Event_ByActor = K2Node_Event_ByActor;
	Parms.K2Node_Event_OptionIndex_1 = K2Node_Event_OptionIndex_1;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue_1 = CallFunc_GetAIController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_ComponentBoundEvent_bIsBeyondLastLayer = K2Node_ComponentBoundEvent_bIsBeyondLastLayer;
	Parms.K2Node_ComponentBoundEvent_LayerIndex = K2Node_ComponentBoundEvent_LayerIndex;
	Parms.K2Node_ComponentBoundEvent_bIsSeen = K2Node_ComponentBoundEvent_bIsSeen;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetAIController_ReturnValue_2 = CallFunc_GetAIController_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_ScalingDamageMultiplier_NewDmg = CallFunc_ScalingDamageMultiplier_NewDmg;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ScalingDamageMultiplier_NewDmg_1 = CallFunc_ScalingDamageMultiplier_NewDmg_1;
	Parms.CallFunc_ScalingHealthMultiplier_NewMaxHealth = CallFunc_ScalingHealthMultiplier_NewMaxHealth;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_GetAIController_ReturnValue_3 = CallFunc_GetAIController_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_Event_Marker = K2Node_Event_Marker;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue_4 = CallFunc_GetAIController_ReturnValue_4;
	Parms.CallFunc_LineOfSightTo_ReturnValue = CallFunc_LineOfSightTo_ReturnValue;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetHUD_HUD_1 = CallFunc_GetHUD_HUD_1;
	Parms.K2Node_Event_InteractingActor_1 = K2Node_Event_InteractingActor_1;
	Parms.K2Node_Event_OptionIndex = K2Node_Event_OptionIndex;
	Parms.K2Node_Event_InteractingActor = K2Node_Event_InteractingActor;
	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface = K2Node_DynamicCast_AsBP_Jig_Character_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface_1 = K2Node_DynamicCast_AsBP_Jig_Character_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_RequestServerData_Result = CallFunc_RequestServerData_Result;
	Parms.CallFunc_SetupInventoryWidget_InventoryWidgetRef = CallFunc_SetupInventoryWidget_InventoryWidgetRef;
	Parms.CallFunc_AddJigWidgetToContent_Result = CallFunc_AddJigWidgetToContent_Result;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_NewValue_4 = K2Node_CustomEvent_NewValue_4;
	Parms.K2Node_CustomEvent_NewValue_3 = K2Node_CustomEvent_NewValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_2 = K2Node_CustomEvent_NewValue_2;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StoreStats_ReturnValue = CallFunc_StoreStats_ReturnValue;
	Parms.CallFunc_StoreStats_ReturnValue_1 = CallFunc_StoreStats_ReturnValue_1;
	Parms.CallFunc_SetAchievement_ReturnValue = CallFunc_SetAchievement_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_SetAchievement_ReturnValue_1 = CallFunc_SetAchievement_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_K2_DespawnSubject_SubjectHandle = CallFunc_K2_DespawnSubject_SubjectHandle;
	Parms.CallFunc_K2_DespawnSubject_ReturnValue = CallFunc_K2_DespawnSubject_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_AddXP_XPOutput = CallFunc_AddXP_XPOutput;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast = CallFunc_ApplyDamage_BaseDamage_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

