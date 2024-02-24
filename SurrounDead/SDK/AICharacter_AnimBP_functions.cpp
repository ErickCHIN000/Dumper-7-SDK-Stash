#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AICharacter_AnimBP.AICharacter_AnimBP_C
// (None)

class UClass* UAICharacter_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AICharacter_AnimBP_C");

	return Clss;
}


// AICharacter_AnimBP_C AICharacter_AnimBP.Default__AICharacter_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAICharacter_AnimBP_C* UAICharacter_AnimBP_C::GetDefaultObj()
{
	static class UAICharacter_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAICharacter_AnimBP_C*>(UAICharacter_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Is Dead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Dead                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::AI_Is_Dead_(bool* Dead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Is Dead?");

	Params::UAICharacter_AnimBP_C_AI_Is_Dead__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dead != nullptr)
		*Dead = Parms.Dead;

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Can Interact?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Interact                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::AI_Can_Interact_(bool* Can_Interact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Can Interact?");

	Params::UAICharacter_AnimBP_C_AI_Can_Interact__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Interact != nullptr)
		*Can_Interact = Parms.Can_Interact;

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Actor Attack Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attack_Target                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Actor Attack Target");

	Params::UAICharacter_AnimBP_C_Actor_Attack_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attack_Target != nullptr)
		*Attack_Target = Parms.Attack_Target;

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAICharacter_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimGraph");

	Params::UAICharacter_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Return Combat Stance Anims
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Use_Combat_Stance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  AI_Animation                                                     (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::Return_Combat_Stance_Anims(bool* Use_Combat_Stance, struct FS_AIAnims* AI_Animation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Return Combat Stance Anims");

	Params::UAICharacter_AnimBP_C_Return_Combat_Stance_Anims_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Use_Combat_Stance != nullptr)
		*Use_Combat_Stance = Parms.Use_Combat_Stance;

	if (AI_Animation != nullptr)
		*AI_Animation = std::move(Parms.AI_Animation);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Return Behaviour Anims
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_AllAIAnims               All_Anims                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class E_AIBehaviour           Behaviour                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  Anims                                                            (Parm, OutParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::Return_Behaviour_Anims(const struct FS_AllAIAnims& All_Anims, enum class E_AIBehaviour Behaviour, struct FS_AIAnims* Anims, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Return Behaviour Anims");

	Params::UAICharacter_AnimBP_C_Return_Behaviour_Anims_Params Parms{};

	Parms.All_Anims = All_Anims;
	Parms.Behaviour = Behaviour;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Anims != nullptr)
		*Anims = std::move(Parms.Anims);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Return Current Behaviour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AIBehaviour           New_Behaviour                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::Return_Current_Behaviour(enum class E_AIBehaviour* New_Behaviour, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Return Current Behaviour");

	Params::UAICharacter_AnimBP_C_Return_Current_Behaviour_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (New_Behaviour != nullptr)
		*New_Behaviour = Parms.New_Behaviour;

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_30FADA244979E1A4DEC151ACA5A1529D
// (BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_30FADA244979E1A4DEC151ACA5A1529D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_30FADA244979E1A4DEC151ACA5A1529D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_1800AA594D0A851E6968AD905AA5CB7C
// (BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_1800AA594D0A851E6968AD905AA5CB7C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_1800AA594D0A851E6968AD905AA5CB7C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_E7F5323B4BF7CB5F21896D91D6D0F8AD
// (BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_E7F5323B4BF7CB5F21896D91D6D0F8AD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_E7F5323B4BF7CB5F21896D91D6D0F8AD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_B9E29D514B97005E25051F8C9049A590
// (BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_B9E29D514B97005E25051F8C9049A590()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_B9E29D514B97005E25051F8C9049A590");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UAICharacter_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_IdleStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_IdleStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_IdleStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_JogStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_JogStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_JogStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_ActiveMeleeDetect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_ActiveMeleeDetect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_ActiveMeleeDetect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_DeactiveMeleeDetect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_DeactiveMeleeDetect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_DeactiveMeleeDetect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_Equip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_Equip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_Equip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_Unequip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_Unequip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_Unequip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_Block Attack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_Block_Attack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_Block Attack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_Unblock Attack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_Unblock_Attack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_Unblock Attack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_AI Reload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_AI_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_AI Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Reinitialize Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::Reinitialize_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Reinitialize Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_Begin Jump End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_Begin_Jump_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_Begin Jump End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AnimNotify_Jump End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AnimNotify_Jump_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AnimNotify_Jump End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Animation Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AIBehaviour           Behaviour                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::AI_Animation_Switch(enum class E_AIBehaviour Behaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Animation Switch");

	Params::UAICharacter_AnimBP_C_AI_Animation_Switch_Params Parms{};

	Parms.Behaviour = Behaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BlockType             Block_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Block_Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Block");

	Params::UAICharacter_AnimBP_C_AI_Block_Params Parms{};

	Parms.Block_Type = Block_Type;
	Parms.Block_Attacker = Block_Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Camera Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::AI_Camera_Activate(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Camera Activate");

	Params::UAICharacter_AnimBP_C_AI_Camera_Activate_Params Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI End Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AI_End_Alert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI End Alert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Alert_Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::AI_Alert(class AActor* Alert_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Alert");

	Params::UAICharacter_AnimBP_C_AI_Alert_Params Parms{};

	Parms.Alert_Actor = Alert_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Turret End Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::Turret_End_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Turret End Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Turret Start Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::Turret_Start_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Turret Start Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Turret Idle Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::Turret_Idle_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Turret Idle Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Turret Idle Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::Turret_Idle_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Turret Idle Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Turret Destroyed Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::Turret_Destroyed_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Turret Destroyed Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Alert Actor Defenders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attacked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Alert Actor Defenders");

	Params::UAICharacter_AnimBP_C_Alert_Actor_Defenders_Params Parms{};

	Parms.Attacked = Attacked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.Actor Aim Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "Actor Aim Focus");

	Params::UAICharacter_AnimBP_C_Actor_Aim_Focus_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.AI Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAICharacter_AnimBP_C::AI_Dead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "AI Dead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICharacter_AnimBP.AICharacter_AnimBP_C.ExecuteUbergraph_AICharacter_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SmartAIComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterAICharacter_C*     K2Node_DynamicCast_AsBP_Master_AICharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           CallFunc_Return_Current_Behaviour_New_Behaviour                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           CallFunc_Return_Current_Behaviour_New_Behaviour_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims                            (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_1                          (HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_2                          (HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_3                          (HasGetValueTypeHash)
// enum class E_AIBehaviour           CallFunc_Return_Current_Behaviour_New_Behaviour_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_4                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_5                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           K2Node_Event_Behaviour                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BlockType             K2Node_Event_Block_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Block_Attacker                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Activate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Alert_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacked                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacker                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Return_Combat_Stance_Anims_Use_Combat_Stance            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Combat_Stance_Anims_AI_Animation                 (HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_6                          (HasGetValueTypeHash)
// struct FS_AIAnims                  CallFunc_Return_Behaviour_Anims_Anims_7                          (HasGetValueTypeHash)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICharacter_AnimBP_C::ExecuteUbergraph_AICharacter_AnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_17, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, class ABP_MasterAICharacter_C* K2Node_DynamicCast_AsBP_Master_AICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, bool Temp_bool_Variable, bool CallFunc_IsServer_ReturnValue_6, enum class E_AIBehaviour CallFunc_Return_Current_Behaviour_New_Behaviour, enum class E_AIBehaviour CallFunc_Return_Current_Behaviour_New_Behaviour_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims, bool CallFunc_BooleanOR_ReturnValue, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_1, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_2, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_3, enum class E_AIBehaviour CallFunc_Return_Current_Behaviour_New_Behaviour_2, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_4, bool CallFunc_IsValid_ReturnValue_23, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_5, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_26, enum class E_AIBehaviour K2Node_Event_Behaviour, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, bool K2Node_Event_Activate, class AActor* K2Node_Event_Alert_Actor, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, class AActor* K2Node_Event_Instigator, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Return_Combat_Stance_Anims_Use_Combat_Stance, const struct FS_AIAnims& CallFunc_Return_Combat_Stance_Anims_AI_Animation, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, enum class E_AIBehaviour K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_6, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_7, double K2Node_VariableSet_Direction_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICharacter_AnimBP_C", "ExecuteUbergraph_AICharacter_AnimBP");

	Params::UAICharacter_AnimBP_C_ExecuteUbergraph_AICharacter_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsBP_Master_AICharacter = K2Node_DynamicCast_AsBP_Master_AICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_Return_Current_Behaviour_New_Behaviour = CallFunc_Return_Current_Behaviour_New_Behaviour;
	Parms.CallFunc_Return_Current_Behaviour_New_Behaviour_1 = CallFunc_Return_Current_Behaviour_New_Behaviour_1;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Return_Behaviour_Anims_Anims = CallFunc_Return_Behaviour_Anims_Anims;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_1 = CallFunc_Return_Behaviour_Anims_Anims_1;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_2 = CallFunc_Return_Behaviour_Anims_Anims_2;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_3 = CallFunc_Return_Behaviour_Anims_Anims_3;
	Parms.CallFunc_Return_Current_Behaviour_New_Behaviour_2 = CallFunc_Return_Current_Behaviour_New_Behaviour_2;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_4 = CallFunc_Return_Behaviour_Anims_Anims_4;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_5 = CallFunc_Return_Behaviour_Anims_Anims_5;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.K2Node_Event_Behaviour = K2Node_Event_Behaviour;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1 = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Event_Block_Type = K2Node_Event_Block_Type;
	Parms.K2Node_Event_Block_Attacker = K2Node_Event_Block_Attacker;
	Parms.K2Node_Event_Activate = K2Node_Event_Activate;
	Parms.K2Node_Event_Alert_Actor = K2Node_Event_Alert_Actor;
	Parms.K2Node_Event_Attacked = K2Node_Event_Attacked;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Return_Combat_Stance_Anims_Use_Combat_Stance = CallFunc_Return_Combat_Stance_Anims_Use_Combat_Stance;
	Parms.CallFunc_Return_Combat_Stance_Anims_AI_Animation = CallFunc_Return_Combat_Stance_Anims_AI_Animation;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2 = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3 = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_3 = CallFunc_LessEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_6 = CallFunc_Return_Behaviour_Anims_Anims_6;
	Parms.CallFunc_Return_Behaviour_Anims_Anims_7 = CallFunc_Return_Behaviour_Anims_Anims_7;
	Parms.K2Node_VariableSet_Direction_ImplicitCast = K2Node_VariableSet_Direction_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3 = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


