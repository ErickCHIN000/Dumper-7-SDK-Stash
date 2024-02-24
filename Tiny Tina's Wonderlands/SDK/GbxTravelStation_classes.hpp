#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xE8 - 0x28)
// Class GbxTravelStation.TravelGraph
class UTravelGraph : public UObject
{
public:
	class UTravelStationData*                    InitialStation;                                    // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTravelStationData>> ReferencedTravelStations;                          // 0x30(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ULevelData>>     ReferencedLevels;                                  // 0x40(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ULevelGroupData>> ReferencedLevelGroups;                             // 0x50(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  GraphDisplayName;                                  // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	class UTravelStationData*                    TownHubTravelStation;                              // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULevelData>             OverworldLevelData;                                // 0x80(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTravelStationData>     SafeOverworldTravelStation;                        // 0xA8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDownloadableContentData*              DLCExpansionData;                                  // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExternalGraphLevelLinks>      ExternalLinksToOtherLevel;                         // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTravelGraph* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class GbxTravelStation.GlobalTravelGraph
class UGlobalTravelGraph : public UTravelGraph
{
public:
	uint8                                        Pad_216[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalTravelGraph* GetDefaultObj();

	void DebugFindClosestLevel(class UObject* WorldContextObject, class ULevelData* StartingLevel, class ULevelData* DestinationLevel);
};

// 0x118 (0x570 - 0x458)
// Class GbxTravelStation.TravelStationTracker
class ATravelStationTracker : public AActor
{
public:
	TArray<class UTravelStationResurrectComponent*> ResurrectTravelStations;                           // 0x458(0x10)(ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UTravelStationResurrectComponent*> UsableResurrectTravelStations;                     // 0x468(0x10)(ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ULevelTravelStationComponent*>  LevelTravelStations;                               // 0x478(0x10)(ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UFastTravelStationComponent*>   FastTravelStations;                                // 0x488(0x10)(ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UFastTravelStationData*>        AllFastTravelStations;                             // 0x498(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FActiveFastTravelData>         ActiveFastTravelStations;                          // 0x4A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UFastTravelStationData*>        HostFastTravelStations;                            // 0x4B8(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 LastActiveTravelToStation_Client;                  // 0x4C8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 LastTravelledThroughStation;                       // 0x4D0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 LastActiveTravelToStation_Server;                  // 0x4D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 LevelArrivalTravelStation;                         // 0x4E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastDestinationTravelStationName;                  // 0x4E8(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTravelCountdownInfo                  TravelToStationCountdown;                          // 0x4F8(0x20)(Net, Transient, RepNotify, NativeAccessSpecifierPublic)
	class UGlobalTravelGraph*                    GlobalTravelGraph;                                 // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UTravelStationData>     LastOverworldTravelStation;                        // 0x550(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATravelStationTracker* GetDefaultObj();

	void TravelToStationTimer();
	void PlayerJoinedTimer();
	void OnRep_UsableResurrectTravelStations();
	void OnRep_TravelToStationCountdown();
	void OnRep_LastActiveTravelToStation();
	void OnRep_HostFastTravelStations();
	void InterruptTravelToStation(enum class ETravelStatus CancellationReason);
	class UTravelStationComponentBase* GetTravelStationComponent(class UTravelStationData* TravelStationData);
	class AActor* GetLastTravelledThroughStation();
	class AActor* GetLastActiveTravelToStation(class APlayerController* Pc);
	class UFastTravelStationData* GetFastTravelStationInfo(const class FString& FastTravelStationName);
	TArray<class UFastTravelStationData*> GetAllFastTravelStations();
	TArray<struct FActiveFastTravelData> GetActiveFastTravelStationList();
	class UFastTravelStationData* FindFastTravelStationForMap(class FName MapName);
};

// 0x28 (0x718 - 0x6F0)
// Class GbxTravelStation.TravelStationComponentBase
class UTravelStationComponentBase : public UPrimitiveComponent
{
public:
	class FString                                TravelDataSelection;                               // 0x6F0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBypassSavingAsLastLocation;                       // 0x700(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TravelDataClassName;                               // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTravelStationData*                    OverrideTravelData;                                // 0x710(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTravelStationComponentBase* GetDefaultObj();

	bool TravelToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, bool bImmediate, class APawn* ActivatingPawn, bool bDisallowLocalTravel);
	bool TeleportToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, class APawn* SoloTravelPawn, bool bImmediate, bool bForcePlayerTravel);
	bool GetAvailableSpawnLocation(class AActor* ActorForSpawnLocation, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, bool bTestOnly, bool bForVehicle);
	void EnumerateValidTravelStation(class UObject* TravelStationObject, TArray<class FString>* OutItems);
};

// 0x28 (0x740 - 0x718)
// Class GbxTravelStation.FastTravelStationComponent
class UFastTravelStationComponent : public UTravelStationComponentBase
{
public:
	class UFastTravelStationData*                FastTravelData;                                    // 0x718(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFastTravelStationDiscovered;                     // 0x720(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFastTravelStationUndiscovered;                   // 0x730(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFastTravelStationComponent* GetDefaultObj();

	void OnTravelStationActivated(class AActor* PreviousStation);
	void FastTravelToStation(class UObject* WorldContextObject, class UFastTravelStationData* DestinationStationData, class APawn* ActivatingPawn);
	bool DeactivateFastTravel(class UFastTravelStationComponent* FallbackLocation);
	bool ActivateFastTravel();
};

// 0x0 (0x30 - 0x30)
// Class GbxTravelStation.TravelLocationData
class UTravelLocationData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UTravelLocationData* GetDefaultObj();

};

// 0xC8 (0xF8 - 0x30)
// Class GbxTravelStation.TravelStationData
class UTravelStationData : public UTravelLocationData
{
public:
	class FName                                  StationMapName;                                    // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxCondition*>                 Dependencies;                                      // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTravelStationData>     PreviousStation;                                   // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULevelData>             OwningLevel;                                       // 0x70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x98(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGbxUIName*                            DisplayUIName;                                     // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGbxUIName*                            DescriptionUI;                                     // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ULevelData>>     FavorWhenTravelingToLevels;                        // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTravelStationData>> FavorWhenTravelingToStations;                      // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTravelStationData* GetDefaultObj();

	class FName GetStationMapName();
};

// 0x48 (0x140 - 0xF8)
// Class GbxTravelStation.FastTravelStationData
class UFastTravelStationData : public UTravelStationData
{
public:
	enum class EFastTravelDirection              TravelDirection;                                   // 0xF8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_440[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlanetTransform;                                   // 0x100(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDiscoveredByDefault;                              // 0x130(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuggestAsOutOfMapFastTravelDestination;           // 0x131(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_444[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFastTravelStationData* GetDefaultObj();

};

// 0x40 (0x2F8 - 0x2B8)
// Class GbxTravelStation.FastTravelStationDebugButton
class UFastTravelStationDebugButton : public UGbxUserWidget
{
public:
	uint8                                        Pad_45C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBUTTON*                               StationButton;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DescriptionText;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ButtonSelectedColor;                               // 0x2D8(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ButtonUnSelectedColor;                             // 0x2E8(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFastTravelStationDebugButton* GetDefaultObj();

	void OnStationClicked();
};

// 0x68 (0x360 - 0x2F8)
// Class GbxTravelStation.FastTravelStationDebugMenu
class UFastTravelStationDebugMenu : public UGbxDebugMenuSubmenu
{
public:
	class UBUTTON*                               TravelButton;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCheckBox*                             ActiveStationsButton;                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCheckBox*                             ShowLevelStationsButton;                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            TravelStationList;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            ErrorText;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFastTravelStationDebugButton> OptionButtonClass;                                 // 0x320(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAvailableTravelStation>       AllFastTravelStations;                             // 0x328(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAvailableTravelStation>       AvailableFastTravelStations;                       // 0x338(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAvailableTravelStation>       AllLevelTravelStations;                            // 0x348(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         ShowAllFastTravelStations;                         // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFastTravelStationDebugMenu* GetDefaultObj();

	void OnTravelStationSelectedChanged(class UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked);
	void OnTravelButtonClicked();
	void OnShowLevelStationsStateChanged(bool bIsChecked);
	void OnActiveStationsStateChanged(bool bIsChecked);
};

// 0x48 (0x760 - 0x718)
// Class GbxTravelStation.LevelTravelStationComponent
class ULevelTravelStationComponent : public UTravelStationComponentBase
{
public:
	class ULevelTravelStationData*               LevelTravelData;                                   // 0x718(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTravelDataConditional>        LevelTravelDataList;                               // 0x720(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        TextRenderEvalRate;                                // 0x730(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDestinationForTextRenderChanged;                 // 0x738(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D1[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelTravelStationComponent* GetDefaultObj();

	class ULevelTravelStationData* GetLevelTravelStationData();
	class ULevelData* GetDestinationLevelData();
	bool ActivateLevelTravel(class AController* ActivatingController);
};

// 0x48 (0x140 - 0xF8)
// Class GbxTravelStation.LevelTravelStationData
class ULevelTravelStationData : public UTravelStationData
{
public:
	class FName                                  TravelToMapName;                                   // 0xF8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DestinationStationString;                          // 0x100(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTravelStationData>     DestinationStation;                                // 0x110(0x28)(Edit, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVehiclesAllowed;                                  // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVirtualLevel;                                     // 0x139(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoOutOfMapWaypoints;                              // 0x13A(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysTravel;                                     // 0x13B(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelTravelStationData* GetDefaultObj();

};

// 0x0 (0xF8 - 0xF8)
// Class GbxTravelStation.ResurrectTravelStationData
class UResurrectTravelStationData : public UTravelStationData
{
public:

	static class UClass* StaticClass();
	static class UResurrectTravelStationData* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class GbxTravelStation.TeleportDestinationActor
class ATeleportDestinationActor : public AActor
{
public:
	class UTravelStationResurrectComponent*      ResurrectComponent;                                // 0x458(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATeleportDestinationActor* GetDefaultObj();

	void TeleportPlayersToDestination(class UObject* WorldContextObject, class ATeleportDestinationActor* Destination);
};

// 0x0 (0x458 - 0x458)
// Class GbxTravelStation.TravelStationBase
class ATravelStationBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ATravelStationBase* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxTravelStation.TravelStationModuleSettings
class UTravelStationModuleSettings : public UObject
{
public:
	float                                        PlayerHalfHeight;                                  // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayerRadius;                                      // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TravelToStationCountdownTime;                      // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               VehicleExtents;                                    // 0x34(0xC)(Edit, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTravelStationModuleSettings* GetDefaultObj();

};

// 0x88 (0x7A0 - 0x718)
// Class GbxTravelStation.TravelStationResurrectComponent
class UTravelStationResurrectComponent : public UTravelStationComponentBase
{
public:
	bool                                         StationIsActive;                                   // 0x718(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultStationToActive;                            // 0x719(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateOnEnterArea;                              // 0x71A(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResurrectionActive;                               // 0x71B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeverResurectThere;                               // 0x71C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsTeleportDestination;                         // 0x71D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_514[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UChallenge>                TravelDiscoveredChallenge;                         // 0x720(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationCylinderTestDelay;                       // 0x728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseActivationCylinder;                             // 0x72C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActivationCylinderRadius;                          // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationCylinderHalfHeight;                      // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationCylinderZOffset;                         // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStationResurrectActivated;                       // 0x740(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStationResurrectDeactivated;                     // 0x750(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResurrectedAtStation;                            // 0x760(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UResurrectTravelStationData*           ResurrectTravelData;                               // 0x770(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_520[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTravelStationResurrectComponent* GetDefaultObj();

	void OnRep_StationIsActive();
	bool ActivateTravelStation(bool bForceActivation);
};

// 0x0 (0x28 - 0x28)
// Class GbxTravelStation.TravelStationSpawnPointInterface
class ITravelStationSpawnPointInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITravelStationSpawnPointInterface* GetDefaultObj();

};

// 0x20 (0x740 - 0x720)
// Class GbxTravelStation.TravelStationSpawnPointComponent
class UTravelStationSpawnPointComponent : public UCapsuleComponent
{
public:
	uint8                                        Pad_52F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStationActorSpawned;                             // 0x728(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_530[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTravelStationSpawnPointComponent* GetDefaultObj();

};

// 0x20 (0x740 - 0x720)
// Class GbxTravelStation.TravelStationVehicleSpawnPointComponent
class UTravelStationVehicleSpawnPointComponent : public UBoxComponent
{
public:
	uint8                                        Pad_537[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStationActorSpawned;                             // 0x728(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_538[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTravelStationVehicleSpawnPointComponent* GetDefaultObj();

};

}


