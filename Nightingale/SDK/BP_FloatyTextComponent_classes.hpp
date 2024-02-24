#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0xB9 - 0xA0)
// BlueprintGeneratedClass BP_FloatyTextComponent.BP_FloatyTextComponent_C
class UBP_FloatyTextComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                             FLOATY_Widget_size;                                // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_UI_FloatyType                   Dmg_Floaty_Type;                                   // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FloatyTextComponent_C* GetDefaultObj();

	void Create_Debug_Text(struct FVector& WorldPosition, enum class E_UI_FloatyType DmgFloatyType, class AActor* Source, class FText Text, class ANWXPlayerController* L_PlayerController, const struct FGameplayTag& Temp_struct_Variable, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UWBP_Floaty_DamageText_C* CallFunc_Create_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Create_Damage_Text(struct FVector& WorldPosition, enum class E_UI_FloatyType DmgFloatyType, class AActor* DamageSource, double InValue, enum class E_UI_FloatyType LDmgFloatyType, class ANWXPlayerController* L_PlayerController, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetDamageFloatyEnabled_ReturnValue, class UWBP_Floaty_DamageText_C* CallFunc_Create_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController);
	void BindToStructureOnHealthChanged(class UObject* Target, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnStructureHealthChanged(struct FStructureHealthChangedContext& HealthChangedContext, enum class E_UI_FloatyType Temp_byte_Variable, double CallFunc_Abs_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, enum class E_UI_FloatyType Temp_byte_Variable_1, bool Temp_bool_Variable, enum class E_UI_FloatyType K2Node_Select_Default, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast);
	bool IsCloseEnoughToTarget(const struct FVector& Location, class AActor* FloatySource, int32 DrawDistance, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Multicast_CreateDamageTextAllClients(struct FVector& WorldPosition, enum class E_UI_FloatyType DmgFloatyType, double InValue);
	void CreateDamageTextLocalClient(struct FVector& WorldPosition, enum class E_UI_FloatyType Dmg_Floaty_Type, double In_Value);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FloatyTextComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& K2Node_CustomEvent_WorldPosition_1, enum class E_UI_FloatyType K2Node_CustomEvent_DmgFloatyType, double K2Node_CustomEvent_InValue, const struct FVector& K2Node_CustomEvent_WorldPosition, enum class E_UI_FloatyType K2Node_CustomEvent_Dmg_Floaty_Type, double K2Node_CustomEvent_In_Value);
};

}


