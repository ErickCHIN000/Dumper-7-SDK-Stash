#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x31C - 0x230)
// WidgetBlueprintGeneratedClass TargetArrow.TargetArrow_C
class UTargetArrow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_HP_FadeOut;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_HP_FadeIn;                                    // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hit;                                               // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StartTargeting;                                    // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_EnemyHealth;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_EnemyHealth_Glow;                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Indicator;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_HealthBar;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Target;                                    // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Damage;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             ArrowScreenPosition;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LowHealthColor;                                    // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FullHealthColor;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Health;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPVisibility            E_EnemyHPVisibility;                               // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      Enemy;                                             // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_HealthGlow;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPOpacity               E_EnemyHPOpacity;                                  // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D27[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer;                                             // 0x2E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        HPOpacity_Target;                                  // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HPOpacity_RenderOpacity;                           // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageOpacity_Target;                              // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageOpacity;                                     // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageValue;                                       // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DamageTimer;                                       // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisplayDamageNumbers;                             // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HP_FillAmount;                                     // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HP_Opacity;                                        // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health;                                            // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health_Max;                                        // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTargetArrow_C* GetDefaultObj();

	void SetHealth(class UObject* Enemy, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth);
	void UpdateDamageNumbersState(bool Show);
	void GetDamageNumbers(bool* Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show);
	void ResetTextDamage();
	void SetTextDamageOpacity(float DeltaTime, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void SetHPRenderOpacity(float DeltaTime, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue);
	void OpacityLevels(enum class Enum_EnemyHPOpacity Enum, float* Value, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default);
	void OpacityBasedOnDistance(float Distance, float* Opacity, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class Enum_EnemyHPOpacity Temp_byte_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float CallFunc_OpacityLevels_Value, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue);
	void ResetOpacity();
	void GetHPState(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility);
	bool GetIsBossEnemy(bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetHPOpacity(float CallFunc_OpacityLevels_Value, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_OpacityBasedOnDistance_Opacity);
	void CreateMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void GetCurrentFloor(int32* CurrentFloor);
	void GetShowEnemyHP(bool* ShowHP);
	void HPBarVisibilityChanged(class ABaseCharacter_C* Enemy, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsBossEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetHealthBar(float CurrentHealth, float MaxHealth, float CallFunc_MapRangeClamped_ReturnValue);
	enum class ESlateVisibility GetTargetVisibility(enum class ESlateVisibility Local_Visibility, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GameplayPC_IsInTutorial_IsInTutorial);
	void SetTint(float CurrentHealth, float MaxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void OnInitialized();
	void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnEnemyHPVisibilityChanged(enum class Enum_EnemyHPVisibility Visibility);
	void OnEnemyTargeted_Event_0(class ABaseCharacter_C* TargetedEnemy);
	void Setup(class AZero_Base_C* OwningChar);
	void OnEnemyHPOpacityChanged(enum class Enum_EnemyHPOpacity Opacity);
	void HealthTimer_End();
	void HealthTimer_Set();
	void Show();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DamageText_Update(float Damage);
	void Construct();
	void DamageText_Remove();
	void OnDamageNumbersChanged(bool Show);
	void Reset();
	void ExecuteUbergraph_TargetArrow(int32 EntryPoint, enum class Enum_EnemyHPVisibility K2Node_CustomEvent_Visibility, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage_1, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_DoesImplementInterface_ReturnValue, class ABaseCharacter_C* K2Node_CustomEvent_TargetedEnemy, class AZero_Base_C* K2Node_CustomEvent_OwningChar, enum class Enum_EnemyHPOpacity K2Node_CustomEvent_Opacity, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsBossEnemy_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GetIsBossEnemy_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_Show, class FText CallFunc_Conv_FloatToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


