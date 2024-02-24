#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.AgeTierInfographicWidget.OnEvolutionUpgradeButton_BP_Clicked
struct UAgeTierInfographicWidget_OnEvolutionUpgradeButton_BP_Clicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    OnWidgetClicked;                                   // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.AwarenessWidget.SetLocked
struct UAwarenessWidget_SetLocked_Params
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.AwarenessWidget.SetDLCType
struct UAwarenessWidget_SetDLCType_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.AwarenessWidget.SetAwareness
struct UAwarenessWidget_SetAwareness_Params
{
public:
	float                                        Awareness;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MapMarkerWidget.OnActiveFilterChanged
struct UMapMarkerWidget_OnActiveFilterChanged_Params
{
public:
	enum class EMarkerType                       NewMarkerTypeFilter;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.BountyPanel.OnHunterButton_Focused
struct UBountyPanel_OnHunterButton_Focused_Params
{
public:
	class UHunterButtonWidget*                   HunterButtonWidget;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.BountyPanel.GetBountyDataForRank
struct UBountyPanel_GetBountyDataForRank_Params
{
public:
	uint8                                        Rank;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_BountyTier*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.CompassWidget.RemoveTrackedActor
struct UCompassWidget_RemoveTrackedActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.CompassWidget.OnAICombatStatusChanged
struct UCompassWidget_OnAICombatStatusChanged_Params
{
public:
	bool                                         bInCombat;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_AIController*                      AIActor;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.CompassWidget.OnActorRequestingWidget
struct UCompassWidget_OnActorRequestingWidget_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.CompassWidget.OnActorRequestingRemoval
struct UCompassWidget_OnActorRequestingRemoval_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.CompassWidget.AddTrackedActor
struct UCompassWidget_AddTrackedActor_Params
{
public:
	struct FTrackedCompassActor                  Actor;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ContextualControlWidget.RemoveControlWidget
struct UContextualControlWidget_RemoveControlWidget_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ContextualControlWidget.AddControlWidget
struct UContextualControlWidget_AddControlWidget_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ControlText;                                       // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FName                                  InputActionName;                                   // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.ControlsSettingsWidget.OnLayoutChanged
struct UControlsSettingsWidget_OnLayoutChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.CrosshairNavigationWidget.SetFocusedMarker
struct UCrosshairNavigationWidget_SetFocusedMarker_Params
{
public:
	class UMapMarkerWidget*                      _MapMarkerWidget;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.DamageTextController.SpawnHealingText
struct UDamageTextController_SpawnHealingText_Params
{
public:
	struct FVector                               SpawnPos;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ManeaterUI.DamageTextController.SpawnEvadeText
struct UDamageTextController_SpawnEvadeText_Params
{
public:
	struct FVector                               SpawnPos;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ManeaterUI.DamageTextController.SpawnDamageText
struct UDamageTextController_SpawnDamageText_Params
{
public:
	struct FVector                               SpawnPos;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVulnerableVictim;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AttackGameplayTags;                                // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ManeaterUI.DamageTextController.OnPlayerCausedCombatEvent
struct UDamageTextController_OnPlayerCausedCombatEvent_Params
{
public:
	enum class ECombatEventType                  CombatEventType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldPos;                                          // 0x4(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVulnerableVictim;                                 // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_871[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AttackGameplayTags;                                // 0x18(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.DeathView.OnButtonMouseOver
struct UDeathView_OnButtonMouseOver_Params
{
public:
	class UTwBaseButton*                         MouseOverWidget;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.DeathView.OnButtonGainFoucus
struct UDeathView_OnButtonGainFoucus_Params
{
public:
	class UTwClickableWidget*                    OnWidgetFocused;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetComponent.GetContainer
struct UEnemyOverheadWidgetComponent_GetContainer_Params
{
public:
	class UEnemyOverheadWidgetContainer*         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnViewControllerVisibilityChanged
struct UEnemyOverheadWidgetContainer_OnViewControllerVisibilityChanged_Params
{
public:
	enum class ESlateVisibility                  ControllerVisibility;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnThreatStateChanged
struct UEnemyOverheadWidgetContainer_OnThreatStateChanged_Params
{
public:
	enum class EAIThreatAlertState               NewAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InstigatingActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnRelatedObjectiveChanged
struct UEnemyOverheadWidgetContainer_OnRelatedObjectiveChanged_Params
{
public:
	enum class EObjectiveType                    ObjectiveType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnTakeDamage
struct UEnemyOverheadWidgetContainer_OnPawnTakeDamage_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_950[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           InstigatedBy;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnKilled
struct UEnemyOverheadWidgetContainer_OnPawnKilled_Params
{
public:
	class AME_Character*                         Victim;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Killer;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnHUDVisiblityChanged
struct UEnemyOverheadWidgetContainer_OnHUDVisiblityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnGamePauseStateChanged
struct UEnemyOverheadWidgetContainer_OnGamePauseStateChanged_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnCinematicModeChanged
struct UEnemyOverheadWidgetContainer_OnCinematicModeChanged_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EnemyOverheadWidgetContainer.OnBoatKilled
struct UEnemyOverheadWidgetContainer_OnBoatKilled_Params
{
public:
	class AME_VehiclePawn*                       Victim;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.UpdateWidgetDangerSense
struct UEnemyScreenSpaceWidgetContainer_UpdateWidgetDangerSense_Params
{
public:
	class AActor*                                DangerousActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnScreenSpaceWidgetRequested
struct UEnemyScreenSpaceWidgetContainer_OnScreenSpaceWidgetRequested_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnRemoveScreenSpaceWidgetRequested
struct UEnemyScreenSpaceWidgetContainer_OnRemoveScreenSpaceWidgetRequested_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.EvolutionAbilityWidget.OnSonarAbilityActivated
struct UEvolutionAbilityWidget_OnSonarAbilityActivated_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EvolutionAbilityWidget.OnSlottedEvolutionChanged
struct UEvolutionAbilityWidget_OnSlottedEvolutionChanged_Params
{
public:
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   Evolution;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.EvolutionAbilityWidget.OnEvolutionAbilityActivated
struct UEvolutionAbilityWidget_OnEvolutionAbilityActivated_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EvolutionAbilityWidget.OnCinematicModeChanged
struct UEvolutionAbilityWidget_OnCinematicModeChanged_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotType
struct UEvolutionIconButtonWidget_GetSlotType_Params
{
public:
	enum class EEvolutionSlot                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotName
struct UEvolutionIconButtonWidget_GetSlotName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetRarity
struct UEvolutionIconButtonWidget_GetRarity_Params
{
public:
	enum class EEvolutionRarity                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetLocked
struct UEvolutionIconButtonWidget_GetLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetIsEquipped
struct UEvolutionIconButtonWidget_GetIsEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetFocusWidgetForNavigation
struct UEvolutionIconButtonWidget_GetFocusWidgetForNavigation_Params
{
public:
	enum class EUINavigation                     NavigationDir;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.EvolutionIconButtonWidget.GetDLCErrorText
struct UEvolutionIconButtonWidget_GetDLCErrorText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolutionUpgrade_Pressed
struct UEvolutionListWidget_OnInventoryEvolutionUpgrade_Pressed_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_MouseLeave
struct UEvolutionListWidget_OnInventoryEvolution_MouseLeave_Params
{
public:
	class UTwBaseButton*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Focused
struct UEvolutionListWidget_OnInventoryEvolution_Focused_Params
{
public:
	class UEvolutionIconButtonWidget*            IconWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Clicked
struct UEvolutionListWidget_OnInventoryEvolution_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.EvolutionListWidget.OnInputDeviceChanged
struct UEvolutionListWidget_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.EvolutionListWidget.OnBackButton_Clicked
struct UEvolutionListWidget_OnBackButton_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.EvolutionsPanel.ShowTutorialPopupWidget
struct UEvolutionsPanel_ShowTutorialPopupWidget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EvolutionsPanel.OnSlottedEvolutionChanged
struct UEvolutionsPanel_OnSlottedEvolutionChanged_Params
{
public:
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   Evolution;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Focused
struct UEvolutionsPanel_OnSlotButtonWidget_Focused_Params
{
public:
	class UEvolutionIconButtonWidget*            IconWidge;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Clicked
struct UEvolutionsPanel_OnSlotButtonWidget_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function ManeaterUI.EvolutionsPanel.OnShark_GrowthStageChanged
struct UEvolutionsPanel_OnShark_GrowthStageChanged_Params
{
public:
	enum class EPlayerGrowthStage                OldGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitPose;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EvolutionsPanel.OnInventoryEvolutionChanged
struct UEvolutionsPanel_OnInventoryEvolutionChanged_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUpgrade;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.EvolutionsPanel.HandleUpgradeButton_Pressed
struct UEvolutionsPanel_HandleUpgradeButton_Pressed_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.EvolutionsPanel.HandleEvolutionListItem_Focused
struct UEvolutionsPanel_HandleEvolutionListItem_Focused_Params
{
public:
	class UEvolutionIconButtonWidget*            IconWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionSlot                    SlotType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B04[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.EvolutionsPanel.ConstructTooltip
struct UEvolutionsPanel_ConstructTooltip_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEvolutionData                        EvolutionData;                                     // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         HideCost;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideUpgrade;                                       // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B11[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.EvolutionUpgradeWidget.OnUpgradeButton_Clicked
struct UEvolutionUpgradeWidget_OnUpgradeButton_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.EvolutionUpgradeWidget.OnCancelButton_Clicked
struct UEvolutionUpgradeWidget_OnCancelButton_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.EvolutionUpgradeWidget.ConstructTooltip
struct UEvolutionUpgradeWidget_ConstructTooltip_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEvolutionData                        EvolutionData;                                     // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEvolutionData                        UpgradedEvolutionData;                             // 0x18(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnViewControllerVisibilityChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnViewControllerVisibilityChanged_Params
{
public:
	enum class ESlateVisibility                  ControllerVisibility;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnHUDVisiblityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnGamePauseStateChanged_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnCinematicModeChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnCinematicModeChanged_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnVibrationChanged
struct UGameplaySettingsWidget_OnVibrationChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnTutorialPopupChanged
struct UGameplaySettingsWidget_OnTutorialPopupChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnSubtitlesChanged
struct UGameplaySettingsWidget_OnSubtitlesChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnSprintChanged
struct UGameplaySettingsWidget_OnSprintChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnRightStickSensitivityChanged
struct UGameplaySettingsWidget_OnRightStickSensitivityChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnRaytracingChanged
struct UGameplaySettingsWidget_OnRaytracingChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnMouseSensitivityChanged
struct UGameplaySettingsWidget_OnMouseSensitivityChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnInvertMouseYChanged
struct UGameplaySettingsWidget_OnInvertMouseYChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.GameplaySettingsWidget.OnInvertGamepadYChanged
struct UGameplaySettingsWidget_OnInvertGamepadYChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.HUDRewardQueueWidget.OnWidgetQueueDestruction
struct UHUDRewardQueueWidget_OnWidgetQueueDestruction_Params
{
public:
	class UTwBaseWidget*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.HUDRewardQueueWidget.OnInventoryEvolutionChanged
struct UHUDRewardQueueWidget_OnInventoryEvolutionChanged_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUpgrade;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.InGameMenuView.OnInputDeviceChanged
struct UInGameMenuView_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.InvertedControlsWidget.OnAnyButtonClicked
struct UInvertedControlsWidget_OnAnyButtonClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    WidgetClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnTweenStep
struct ULevelProgressWidget_OnTweenStep_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnShark_LevelChanged
struct ULevelProgressWidget_OnShark_LevelChanged_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C16[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthStageAvailable
struct ULevelProgressWidget_OnShark_GrowthStageAvailable_Params
{
public:
	enum class EPlayerGrowthStage                OldGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitPose;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthLevelChanged
struct ULevelProgressWidget_OnShark_GrowthLevelChanged_Params
{
public:
	enum class EPlayerGrowthStage                OldGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitPose;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnShark_ExperienceGained
struct ULevelProgressWidget_OnShark_ExperienceGained_Params
{
public:
	int32                                        ExperienceGained;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnOpacityTweenStep
struct ULevelProgressWidget_OnOpacityTweenStep_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnOpacityOutFinished
struct ULevelProgressWidget_OnOpacityOutFinished_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.LevelProgressWidget.OnOpacityInFinished
struct ULevelProgressWidget_OnOpacityInFinished_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ManeaterUI.LoadGameButtonWidget.SetProfileData
struct ULoadGameButtonWidget_SetProfileData_Params
{
public:
	class FText                                  SlotName;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FDateTime                             SaveTime;                                          // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CurrentRegion;                                     // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  PlayerLevel;                                       // 0x38(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  TimePlayed;                                        // 0x50(0x18)(Parm, NativeAccessSpecifierPublic)
	class UTexture2D*                            SaveImage;                                         // 0x68(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.LoadGameButtonWidget.SetIsEmpty
struct ULoadGameButtonWidget_SetIsEmpty_Params
{
public:
	bool                                         Empty;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ManeaterUI.MacroObjectiveMeterWidget.UpdateMeters
struct UMacroObjectiveMeterWidget_UpdateMeters_Params
{
public:
	class FText                                  RegionName;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UTexture2D*                            RegionIcon;                                        // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRegionPoisoned;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C55[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OldRegionPerc;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewRegionPerc;                                     // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldGamePerc;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewGamePerc;                                       // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C56[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionStepEvent
struct UMacroObjectiveMeterWidget_OnRegionStepEvent_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionCompleteEvent
struct UMacroObjectiveMeterWidget_OnRegionCompleteEvent_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeOutComplete
struct UMacroObjectiveMeterWidget_OnOpacityFadeOutComplete_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeInComplete
struct UMacroObjectiveMeterWidget_OnOpacityFadeInComplete_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MacroObjectiveMeterWidget.OnGameStepEvent
struct UMacroObjectiveMeterWidget_OnGameStepEvent_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ManeaterBaseViewController.OnInputDeviceChanged
struct UManeaterBaseViewController_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.ManeaterHUD.TimeTrialTick
struct AManeaterHUD_TimeTrialTick_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.TimeTrialProgress
struct AManeaterHUD_TimeTrialProgress_Params
{
public:
	int32                                        RingProgress;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RingTotal;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.ShowTutorialSinglePopupWidget
struct AManeaterHUD_ShowTutorialSinglePopupWidget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageCount;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ManeaterUI.ManeaterHUD.ShowRegionToast
struct AManeaterHUD_ShowRegionToast_Params
{
public:
	struct FRegionToastData                      Data;                                              // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ManeaterUI.ManeaterHUD.ShowBasicTooltip
struct AManeaterHUD_ShowBasicTooltip_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  InputText;                                         // 0x30(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C99[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.SetPlayerWaypoint
struct AManeaterHUD_SetPlayerWaypoint_Params
{
public:
	struct FVector2D                             Pos;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ManeaterHUD.SetDeathScreenEnabled
struct AManeaterHUD_SetDeathScreenEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.RemoveContextualControlPrompt
struct AManeaterHUD_RemoveContextualControlPrompt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.PushDeathScreen
struct AManeaterHUD_PushDeathScreen_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ManeaterUI.ManeaterHUD.PlayerKnifingStateChanged
struct AManeaterHUD_PlayerKnifingStateChanged_Params
{
public:
	bool                                         bIsKnifing;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              ChangeContext;                                     // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.ManeaterHUD.PlayerInfamyRankUp
struct AManeaterHUD_PlayerInfamyRankUp_Params
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnTimeDilationEvent
struct AManeaterHUD_OnTimeDilationEvent_Params
{
public:
	bool                                         bStarted;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              ActionMode;                                        // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnThrashUIChanged
struct AManeaterHUD_OnThrashUIChanged_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerSharkThrashed;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnStoryEventProgress
struct AManeaterHUD_OnStoryEventProgress_Params
{
public:
	int32                                        CurrentStoryIndex;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ConditionText;                                     // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        StoryProgress;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnSonarUntarget
struct AManeaterHUD_OnSonarUntarget_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnSonarTarget
struct AManeaterHUD_OnSonarTarget_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnSonarRefreshTarget
struct AManeaterHUD_OnSonarRefreshTarget_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnSonarAbilityActivated
struct AManeaterHUD_OnSonarAbilityActivated_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnPlayerTookDamage
struct AManeaterHUD_OnPlayerTookDamage_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           InstigatedBy;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnPlayerRegionChanged
struct AManeaterHUD_OnPlayerRegionChanged_Params
{
public:
	enum class EWorldRegion                      Region;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            RegionIcon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ManeaterUI.ManeaterHUD.OnPlayerNutrientGained
struct AManeaterHUD_OnPlayerNutrientGained_Params
{
public:
	enum class ENutrientType                     NutrientType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NutrientGain;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromObjective;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnPlayerMovementModeChanged
struct AManeaterHUD_OnPlayerMovementModeChanged_Params
{
public:
	class AME_PlayerSharkCharacter*              PlayerShark;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     OldMovementMode;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     NewMovementMode;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnObjectiveUpdated
struct AManeaterHUD_OnObjectiveUpdated_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnObjectiveTrack
struct AManeaterHUD_OnObjectiveTrack_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldTrack;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrackerUpdate;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFE[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnObjectiveStateChanged
struct AManeaterHUD_OnObjectiveStateChanged_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveState                   NewState;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D04[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnObjectiveStarted
struct AManeaterHUD_OnObjectiveStarted_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnObjectiveDiscovered
struct AManeaterHUD_OnObjectiveDiscovered_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnObjectiveComplete
struct AManeaterHUD_OnObjectiveComplete_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnNewSoftTarget
struct AManeaterHUD_OnNewSoftTarget_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnNewRelevantTarget
struct AManeaterHUD_OnNewRelevantTarget_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnLevelChanged
struct AManeaterHUD_OnLevelChanged_Params
{
public:
	int32                                        GrowthLevel;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnLandmarkObjectFound
struct AManeaterHUD_OnLandmarkObjectFound_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LandmarkDescription;                               // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnHudTipRequested
struct AManeaterHUD_OnHudTipRequested_Params
{
public:
	struct FME_TutorialTipEvent                  ME_TutorialEvent;                                  // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnHUDErrorMessage
struct AManeaterHUD_OnHUDErrorMessage_Params
{
public:
	class FText                                  ErrorMessage;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnGameplayTagRemoved
struct AManeaterHUD_OnGameplayTagRemoved_Params
{
public:
	struct FGameplayTagContainer                 TagsRemoved;                                       // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnGameplayTagAdded
struct AManeaterHUD_OnGameplayTagAdded_Params
{
public:
	struct FGameplayTagContainer                 TagsAdded;                                         // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	float                                        TagDuration;                                       // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D24[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnEvolutionAbilityActivated
struct AManeaterHUD_OnEvolutionAbilityActivated_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnDangerSenseUpdated
struct AManeaterHUD_OnDangerSenseUpdated_Params
{
public:
	class AActor*                                DangerousActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D27[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnBountyBossSpawned
struct AManeaterHUD_OnBountyBossSpawned_Params
{
public:
	struct FBountyViewData                       BountyData;                                        // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnBossFightAvailable
struct AManeaterHUD_OnBossFightAvailable_Params
{
public:
	class UME_PlayerObjectiveBoss*               BossObjective;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnAICombatStatusChanged
struct AManeaterHUD_OnAICombatStatusChanged_Params
{
public:
	bool                                         bInCombat;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D30[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_AIController*                      AIActor;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.OnAdvancedToNextEpisode
struct AManeaterHUD_OnAdvancedToNextEpisode_Params
{
public:
	int32                                        CurrentStoryEventIndex;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentEpisodeNumber;                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ManeaterUI.ManeaterHUD.OnAbilityTriggered
struct AManeaterHUD_OnAbilityTriggered_Params
{
public:
	enum class EME_CharacterAbility              CharacterAbilityEnum;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AbilityTag;                                        // 0x4(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.GetTutorialModal
struct AManeaterHUD_GetTutorialModal_Params
{
public:
	class UTwBaseWidget*                         ReturnValue;                                       // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUD.GetHUDViewController
struct AManeaterHUD_GetHUDViewController_Params
{
public:
	class UManeaterHUDViewController*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ManeaterHUD.AddContextualControlPrompt
struct AManeaterHUD_AddContextualControlPrompt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ButtonText;                                        // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FName                                  InputActionName;                                   // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterHUDPauseMenuView.OnQuit_Clicked
struct UManeaterHUDPauseMenuView_OnQuit_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonMouseOver
struct UManeaterHUDPauseMenuView_OnButtonMouseOver_Params
{
public:
	class UTwBaseButton*                         MouseOverWidget;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonGainFoucus
struct UManeaterHUDPauseMenuView_OnButtonGainFoucus_Params
{
public:
	class UTwClickableWidget*                    OnWidgetFocused;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterHUDView.ShowTutorialSinglePopupWidget
struct UManeaterHUDView_ShowTutorialSinglePopupWidget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageCount;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUDView.ShowStoryCompleteWidget
struct UManeaterHUDView_ShowStoryCompleteWidget_Params
{
public:
	class UStoryCompleteWidget*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterHUDView.ShowInvertedControlsWidget
struct UManeaterHUDView_ShowInvertedControlsWidget_Params
{
public:
	class UInvertedControlsWidget*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterMapPanel.OnObjectiveTrack
struct UManeaterMapPanel_OnObjectiveTrack_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldTrack;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrackerUpdate;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D92[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterMapPanel.OnNewPlayerWaypointSet
struct UManeaterMapPanel_OnNewPlayerWaypointSet_Params
{
public:
	struct FVector2D                             Pos;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterSaveTransferView.SetUpEvents
struct UManeaterSaveTransferView_SetUpEvents_Params
{
public:
	class UManeaterTitleMenuView*                View;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ManeaterUI.ManeaterSaveTransferView.SaveDataMounted
struct UManeaterSaveTransferView_SaveDataMounted_Params
{
public:
	TArray<uint8>                                SaveDataSlot0;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SaveDataSlot1;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SaveDataSlot2;                                     // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterSaveTransferView.OnContinue_Clicked
struct UManeaterSaveTransferView_OnContinue_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterSaveTransferView.OnCancel_Clicked
struct UManeaterSaveTransferView_OnCancel_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGameDLC01
struct UManeaterTitleMenuView_PeekSaveGameDLC01_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMED_SaveData_DLC01*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGame
struct UManeaterTitleMenuView_PeekSaveGame_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_SaveGameObject*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_MouseEnter
struct UManeaterTitleMenuView_OnSettings_MouseEnter_Params
{
public:
	class UTwBaseButton*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_Clicked
struct UManeaterTitleMenuView_OnSettings_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Focused
struct UManeaterTitleMenuView_OnPlayGame_Focused_Params
{
public:
	class UTwClickableWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Clicked
struct UManeaterTitleMenuView_OnPlayGame_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnMenuButton_FocusLost
struct UManeaterTitleMenuView_OnMenuButton_FocusLost_Params
{
public:
	class UTwClickableWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnInputDeviceChanged
struct UManeaterTitleMenuView_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnExit_MouseEnter
struct UManeaterTitleMenuView_OnExit_MouseEnter_Params
{
public:
	class UTwBaseButton*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnExit_Clicked
struct UManeaterTitleMenuView_OnExit_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnDLCStatusChanged
struct UManeaterTitleMenuView_OnDLCStatusChanged_Params
{
public:
	bool                                         bIsDLCOwned;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnDLCButton_Clicked
struct UManeaterTitleMenuView_OnDLCButton_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Focused
struct UManeaterTitleMenuView_OnContinueGame_Focused_Params
{
public:
	class UTwClickableWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Clicked
struct UManeaterTitleMenuView_OnContinueGame_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseLeave
struct UManeaterTitleMenuView_OnContinueButton_MouseLeave_Params
{
public:
	class UTwBaseButton*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseEnter
struct UManeaterTitleMenuView_OnContinueButton_MouseEnter_Params
{
public:
	class UTwBaseButton*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.OnBackButton_Clicked
struct UManeaterTitleMenuView_OnBackButton_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.HandleDLCEntitlementInitialized
struct UManeaterTitleMenuView_HandleDLCEntitlementInitialized_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.HandleDLCEntitlementChanged
struct UManeaterTitleMenuView_HandleDLCEntitlementChanged_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.GetStoryProgressInfo
struct UManeaterTitleMenuView_GetStoryProgressInfo_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FME_StoryInfo                         ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ManeaterTitleMenuView.DoesSaveGameExist
struct UManeaterTitleMenuView_DoesSaveGameExist_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterTitleSplashView.OnStartButtonClicked
struct UManeaterTitleSplashView_OnStartButtonClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    OnWidgetClicked;                                   // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.IsKeyValidForUpgrade
struct UManeaterUIFunctionLibrary_IsKeyValidForUpgrade_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E17[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetTextForKeybind
struct UManeaterUIFunctionLibrary_GetTextForKeybind_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGamepad;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IconSize;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconOffset;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetShouldDisplayAttributeAsPercentage
struct UManeaterUIFunctionLibrary_GetShouldDisplayAttributeAsPercentage_Params
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E24[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetReadableNameForAttribute
struct UManeaterUIFunctionLibrary_GetReadableNameForAttribute_Params
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetNutrientColor
struct UManeaterUIFunctionLibrary_GetNutrientColor_Params
{
public:
	enum class ENutrientType                     Nutrient;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetManeaterHUD
struct UManeaterUIFunctionLibrary_GetManeaterHUD_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AManeaterHUD*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedSlotName
struct UManeaterUIFunctionLibrary_GetLocalizedSlotName_Params
{
public:
	enum class EEvolutionSlot                    Slot;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedRarityName
struct UManeaterUIFunctionLibrary_GetLocalizedRarityName_Params
{
public:
	enum class EEvolutionRarity                  Rarity;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedGrowthName
struct UManeaterUIFunctionLibrary_GetLocalizedGrowthName_Params
{
public:
	enum class EPlayerGrowthStage                GrowthStage;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E44[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedEvolutionProcName
struct UManeaterUIFunctionLibrary_GetLocalizedEvolutionProcName_Params
{
public:
	enum class EEvolutionProcType                ProcType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E47[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedDLCName
struct UManeaterUIFunctionLibrary_GetLocalizedDLCName_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIsDisplayAttributeMultiplier
struct UManeaterUIFunctionLibrary_GetIsDisplayAttributeMultiplier_Params
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForObjectiveType
struct UManeaterUIFunctionLibrary_GetIconForObjectiveType_Params
{
public:
	enum class EObjectiveType                    ObjectiveType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStoryObjective;                                   // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E56[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForMarkerType
struct UManeaterUIFunctionLibrary_GetIconForMarkerType_Params
{
public:
	enum class EMarkerType                       MarkerType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEvolutionColor
struct UManeaterUIFunctionLibrary_GetEvolutionColor_Params
{
public:
	enum class EEvolutionRarity                  Rarity;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEpisodeImage
struct UManeaterUIFunctionLibrary_GetEpisodeImage_Params
{
public:
	int32                                        StoryIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MapMarkerPopupWidget.SetObjectiveData
struct UMapMarkerPopupWidget_SetObjectiveData_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapMarkerPopupWidget.HandleInput
struct UMapMarkerPopupWidget_HandleInput_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.SetWidgetSwitcherIndex
struct UMapProgressButtonWidget_SetWidgetSwitcherIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.SetShowProgress
struct UMapProgressButtonWidget_SetShowProgress_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.SetSectionTexture
struct UMapProgressButtonWidget_SetSectionTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.SetSectionName
struct UMapProgressButtonWidget_SetSectionName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.SetProgress
struct UMapProgressButtonWidget_SetProgress_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.SetActionContainerDisabled
struct UMapProgressButtonWidget_SetActionContainerDisabled_Params
{
public:
	bool                                         Disable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.IsFocused
struct UMapProgressButtonWidget_IsFocused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.MapProgressButtonWidget.GetWidgetSwitcherIndex
struct UMapProgressButtonWidget_GetWidgetSwitcherIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetTinFoilHatProgress
struct UMapProgressWidget_SetTinFoilHatProgress_Params
{
public:
	class FText                                  Progress;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetSectionTexture
struct UMapProgressWidget_SetSectionTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetSectionName
struct UMapProgressWidget_SetSectionName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetProgress
struct UMapProgressWidget_SetProgress_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetNutrientCacheProgress
struct UMapProgressWidget_SetNutrientCacheProgress_Params
{
public:
	class FText                                  Progress;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetLandmarkProgress
struct UMapProgressWidget_SetLandmarkProgress_Params
{
public:
	class FText                                  Progress;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.MapProgressWidget.SetCollectibleProgress
struct UMapProgressWidget_SetCollectibleProgress_Params
{
public:
	class FText                                  Progress;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ME_CinematicMovieWidget.SetMediaSource
struct UME_CinematicMovieWidget_SetMediaSource_Params
{
public:
	class UMediaSource*                          InMovie;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ME_CinematicMovieWidget.GetMediaSourceForPlatform
struct UME_CinematicMovieWidget_GetMediaSourceForPlatform_Params
{
public:
	class UMediaSource*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged
struct UMED_ObjectiveIndicatorScreenSpaceWidget_OnHUDVisiblityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged
struct UMED_ObjectiveIndicatorScreenSpaceWidget_OnGamePauseStateChanged_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget.OnCinematicModeChanged
struct UMED_ObjectiveIndicatorScreenSpaceWidget_OnCinematicModeChanged_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.MESettingsStepper.SetSelectedOption
struct UMESettingsStepper_SetSelectedOption_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerBroadcast;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.MESettingsStepper.SetOptions
struct UMESettingsStepper_SetOptions_Params
{
public:
	TArray<class FText>                          Options;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.MESettingsStepper.OnPrevClicked
struct UMESettingsStepper_OnPrevClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    WidgetClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.MESettingsStepper.OnNextClicked
struct UMESettingsStepper_OnNextClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    WidgetClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.MESettingsStepper.GetSelectedOption
struct UMESettingsStepper_GetSelectedOption_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.MESettingsStepper.GetOptions
struct UMESettingsStepper_GetOptions_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ObjectiveButtonWidget.OnObjectiveTrack
struct UObjectiveButtonWidget_OnObjectiveTrack_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldTrack;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrackerUpdate;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF6[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ObjectiveButtonWidget.GetFocusWidgetForNavigation
struct UObjectiveButtonWidget_GetFocusWidgetForNavigation_Params
{
public:
	enum class EUINavigation                     NavigationDir;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveCollectionWidget.SetFocusedObjective
struct UObjectiveCollectionWidget_SetFocusedObjective_Params
{
public:
	class UObjectiveButtonWidget*                ObjectiveButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_MouseEnter
struct UObjectiveCollectionWidget_OnObjective_MouseEnter_Params
{
public:
	class UObjectiveButtonWidget*                ObjectiveButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_Focused
struct UObjectiveCollectionWidget_OnObjective_Focused_Params
{
public:
	class UObjectiveButtonWidget*                ObjectiveButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnToastDestroyed
struct UObjectiveControllerWidget_OnToastDestroyed_Params
{
public:
	class UTwBaseWidget*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnStoryEventProgress
struct UObjectiveControllerWidget_OnStoryEventProgress_Params
{
public:
	int32                                        CurrentStoryIndex;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F24[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ConditionText;                                     // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        StoryProgress;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F25[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnRegionChanged
struct UObjectiveControllerWidget_OnRegionChanged_Params
{
public:
	struct FRegionToastData                      Data;                                              // 0x0(0x30)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveUpdated
struct UObjectiveControllerWidget_OnObjectiveUpdated_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveTrack
struct UObjectiveControllerWidget_OnObjectiveTrack_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldTrack;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrackerUpdate;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2F[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStateChanged
struct UObjectiveControllerWidget_OnObjectiveStateChanged_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveState                   NewState;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F32[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStarted
struct UObjectiveControllerWidget_OnObjectiveStarted_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveDiscovered
struct UObjectiveControllerWidget_OnObjectiveDiscovered_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveComplete
struct UObjectiveControllerWidget_OnObjectiveComplete_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnLevelChanged
struct UObjectiveControllerWidget_OnLevelChanged_Params
{
public:
	int32                                        NewGrowthLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F41[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkRegionComplete
struct UObjectiveControllerWidget_OnLandmarkRegionComplete_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkObjectFound
struct UObjectiveControllerWidget_OnLandmarkObjectFound_Params
{
public:
	class UME_PlayerObjective*                   Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LandmarkDescription;                               // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnInfamyRankUp
struct UObjectiveControllerWidget_OnInfamyRankUp_Params
{
public:
	int32                                        NewRank;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnHUDErrorMessage
struct UObjectiveControllerWidget_OnHUDErrorMessage_Params
{
public:
	class FText                                  ErrorMessage;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnBountyBossSpawned
struct UObjectiveControllerWidget_OnBountyBossSpawned_Params
{
public:
	struct FBountyViewData                       BountyData;                                        // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnBossFightAvailable
struct UObjectiveControllerWidget_OnBossFightAvailable_Params
{
public:
	class UME_PlayerObjectiveBoss*               BossObjective;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ObjectiveControllerWidget.OnAdvancedToNextEpisode
struct UObjectiveControllerWidget_OnAdvancedToNextEpisode_Params
{
public:
	int32                                        CurrentStoryEventIndex;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentEpisodeNumber;                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.ObjectiveMapMarkerWidget.OnObjectiveTrack
struct UObjectiveMapMarkerWidget_OnObjectiveTrack_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldTrack;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrackerUpdate;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F75[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerAbilitiesWidget.SetHealth
struct UPlayerAbilitiesWidget_SetHealth_Params
{
public:
	float                                        Health;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerAbilitiesWidget.SetCooldownForAbilitySlot
struct UPlayerAbilitiesWidget_SetCooldownForAbilitySlot_Params
{
public:
	enum class EAbilitySlot                      AbilitySlot;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F88[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerAbilitiesWidget.SetCharges
struct UPlayerAbilitiesWidget_SetCharges_Params
{
public:
	float                                        Charges;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerAbilitiesWidget.SetBoost
struct UPlayerAbilitiesWidget_SetBoost_Params
{
public:
	float                                        Boost;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerHealthBarWidget.SetRemainingBreath
struct UPlayerHealthBarWidget_SetRemainingBreath_Params
{
public:
	float                                        RemainingBreath;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerHealthBarWidget.SetHealthValue
struct UPlayerHealthBarWidget_SetHealthValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerHealthBarWidget.OnTweenStep
struct UPlayerHealthBarWidget_OnTweenStep_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerHealthBarWidget.OnRemainingBreathChanged_BP
struct UPlayerHealthBarWidget_OnRemainingBreathChanged_BP_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerHealthBarWidget.OnHealthValueChanged_BP
struct UPlayerHealthBarWidget_OnHealthValueChanged_BP_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerInfoWidget.OnStoryUpdated
struct UPlayerInfoWidget_OnStoryUpdated_Params
{
public:
	int32                                        ActiveStoryIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ManeaterUI.PlayerInfoWidget.OnRegionChanged
struct UPlayerInfoWidget_OnRegionChanged_Params
{
public:
	struct FRegionToastData                      Data;                                              // 0x0(0x30)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.PlayerInfoWidget.OnPlayerHealthValueChanged
struct UPlayerInfoWidget_OnPlayerHealthValueChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.PlayerInfoWidget.OnPlayerDamaged
struct UPlayerInfoWidget_OnPlayerDamaged_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.PlayerNutrientImage.SetNutrientType
struct UPlayerNutrientImage_SetNutrientType_Params
{
public:
	enum class ENutrientType                     Nutrient;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenStep
struct UPlayerNutrientInstanceIcon_OnTweenStep_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenFinished
struct UPlayerNutrientInstanceIcon_OnTweenFinished_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerNutrientInstanceIcon.OnFadeOutFinished
struct UPlayerNutrientInstanceIcon_OnFadeOutFinished_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ManeaterUI.PlayerNutrientWidget.OnPlayerNutrientGained
struct UPlayerNutrientWidget_OnPlayerNutrientGained_Params
{
public:
	enum class ENutrientType                     NutrientType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NutrientGain;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromObjective;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerNutrientWidget.OnOpacityOutFinished
struct UPlayerNutrientWidget_OnOpacityOutFinished_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerNutrientWidget.OnOpacityInFinished
struct UPlayerNutrientWidget_OnOpacityInFinished_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.PlayerNutrientWidget.OnNutrientsSpent
struct UPlayerNutrientWidget_OnNutrientsSpent_Params
{
public:
	enum class ENutrientType                     NutrientType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NutrientSpent;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.QuestLogPanel.SetRegionFilterButton
struct UQuestLogPanel_SetRegionFilterButton_Params
{
public:
	class UTwBaseButton*                         RegionFilterButton;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.QuestLogPanel.OnRegionFilter_Clicked
struct UQuestLogPanel_OnRegionFilter_Clicked_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    Widget;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusOOB
struct UQuestLogPanel_OnObjectiveCollection_FocusOOB_Params
{
public:
	class UObjectiveCollectionWidget*            ObjectiveCollectionWidget;                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUINavigation                     NavigationDir;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusChanged
struct UQuestLogPanel_OnObjectiveCollection_FocusChanged_Params
{
public:
	class UObjectiveButtonWidget*                ObjectiveWidget;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ManeaterUI.RegionInfoWidget.SetRegionData
struct URegionInfoWidget_SetRegionData_Params
{
public:
	struct FRegionData                           NewRegionData;                                     // 0x0(0x110)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.RegionInfoWidget.SetCurrentlyHovered
struct URegionInfoWidget_SetCurrentlyHovered_Params
{
public:
	bool                                         bCurrentlyHovered;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.RegionInfoWidget.GetRegionName
struct URegionInfoWidget_GetRegionName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.RegionInfoWidget.GetRegion
struct URegionInfoWidget_GetRegion_Params
{
public:
	enum class EWorldRegion                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.ResourceListWidget.OnNutrientsSpent
struct UResourceListWidget_OnNutrientsSpent_Params
{
public:
	enum class ENutrientType                     NutrientType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NutrientSpent;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.SaveSlotSelectWidget.SetSaveSlotIdx
struct USaveSlotSelectWidget_SetSaveSlotIdx_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.SaveSlotSelectWidget.OnRightButtonClicked
struct USaveSlotSelectWidget_OnRightButtonClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    WidgetClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.SaveSlotSelectWidget.OnLeftButtonClicked
struct USaveSlotSelectWidget_OnLeftButtonClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    WidgetClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.StoryCompleteWidget.OnDismissStatsButton_Clicked
struct UStoryCompleteWidget_OnDismissStatsButton_Clicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    OnWidgetClicked;                                   // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.StoryCompleteWidget.OnDismissCongratsButton_Clicked
struct UStoryCompleteWidget_OnDismissCongratsButton_Clicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    OnWidgetClicked;                                   // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ManeaterUI.SubtitleTextWidget.OnSubtitleTextUpdated
struct USubtitleTextWidget_OnSubtitleTextUpdated_Params
{
public:
	class FText                                  SubtitleText;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ManeaterUI.ThrashingWidget.OnUpdateThrashUI
struct UThrashingWidget_OnUpdateThrashUI_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerSharkThrashed;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.ThrashingWidget.EnableThrashUI
struct UThrashingWidget_EnableThrashUI_Params
{
public:
	bool                                         bPlayerSharkThrashed;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.TimeTrialWidget.TimeTrialTick
struct UTimeTrialWidget_TimeTrialTick_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.TimeTrialWidget.TimeTrialRingPassed
struct UTimeTrialWidget_TimeTrialRingPassed_Params
{
public:
	int32                                        CurrentRing;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRing;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.TutorialInfoWidget.SetObjectiveComplete
struct UTutorialInfoWidget_SetObjectiveComplete_Params
{
public:
	enum class ETutorialEventId                  Objective;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.TutorialInfoWidget.SetEnabled
struct UTutorialInfoWidget_SetEnabled_Params
{
public:
	bool                                         _bEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ManeaterUI.TutorialInfoWidget.RepeatedTutorialStepCompleted
struct UTutorialInfoWidget_RepeatedTutorialStepCompleted_Params
{
public:
	int32                                        Numberator;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Denomenator;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.TutorialInfoWidget.RemoveObjective
struct UTutorialInfoWidget_RemoveObjective_Params
{
public:
	enum class ETutorialEventId                  TutorialEventId;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function ManeaterUI.TutorialInfoWidget.AddObjective
struct UTutorialInfoWidget_AddObjective_Params
{
public:
	enum class ETutorialEventId                  Objective;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FME_TutorialEvent                     EventData;                                         // 0x8(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.TUtorialPopupWidget.OnTutorialButton_BP_Clicked
struct UTUtorialPopupWidget_OnTutorialButton_BP_Clicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    OnWidgetClicked;                                   // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ManeaterUI.TUtorialSinglePopupWidget.OnOkButton_Clicked
struct UTUtorialSinglePopupWidget_OnOkButton_Clicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    OnWidgetClicked;                                   // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.VideoSettingsWidget.OnWindowModeChanged
struct UVideoSettingsWidget_OnWindowModeChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.VideoSettingsWidget.OnResolutionChanged
struct UVideoSettingsWidget_OnResolutionChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.VideoSettingsWidget.OnQualityChanged
struct UVideoSettingsWidget_OnQualityChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ManeaterUI.VideoSettingsWidget.OnOptionChanged
struct UVideoSettingsWidget_OnOptionChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.WorldMapWidget.SetDataForRegions
struct UWorldMapWidget_SetDataForRegions_Params
{
public:
	TArray<struct FRegionData>                   RegionData;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ManeaterUI.WorldMapWidget.SetDataForRegion
struct UWorldMapWidget_SetDataForRegion_Params
{
public:
	struct FRegionData                           RegionData;                                        // 0x0(0x110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ManeaterUI.WorldMapWidget.OnObjectiveTrackEvent
struct UWorldMapWidget_OnObjectiveTrackEvent_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldTrack;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrackerUpdate;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1049[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ManeaterUI.WorldMapWidget.OnInputDeviceChanged
struct UWorldMapWidget_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


