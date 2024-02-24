#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class EasyMultiSave.EMSActorSaveInterface
class IEMSActorSaveInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEMSActorSaveInterface* GetDefaultObj();

	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void ActorSaved();
	void ActorPreSave();
	void ActorLoaded();
};

// 0x58 (0x88 - 0x30)
// Class EasyMultiSave.EMSAsyncLoadGame
class UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC3[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContext;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEMSObject*                            EMS;                                               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEMSAsyncLoadGame* GetDefaultObj();

	bool NativeSpawnLoadTask(class UEMSObject* EMSObject, int32& Data, bool& bFullReload);
	bool NativeLoadLevelActors(class UEMSObject* EMSObject);
	class UEMSAsyncLoadGame* AsyncLoadActors(class UObject* WorldContextObject, int32 Data, bool bFullReload);
};

// 0x38 (0x68 - 0x30)
// Class EasyMultiSave.EMSAsyncSaveGame
class UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C35[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContext;                                      // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEMSObject*                            EMS;                                               // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEMSAsyncSaveGame* GetDefaultObj();

	bool NativeSpawnSaveTask(class UEMSObject* EMSObject, int32& Data);
	bool NativeSaveLevelActors(class UEMSObject* EMSObject);
	class UEMSAsyncSaveGame* AsyncSaveActors(class UObject* WorldContextObject, int32 Data);
};

// 0x30 (0x60 - 0x30)
// Class EasyMultiSave.EMSAsyncWait
class UEMSAsyncWait : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_C76[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C78[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEMSAsyncWait* GetDefaultObj();

	class UEMSAsyncWait* AsyncWaitForOperation(class UObject* WorldContextObject, enum class EAsyncCheckType CheckType);
};

// 0x0 (0x28 - 0x28)
// Class EasyMultiSave.EMSCompSaveInterface
class IEMSCompSaveInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEMSCompSaveInterface* GetDefaultObj();

	void ComponentPreSave();
	void ComponentLoaded();
};

// 0x18 (0x40 - 0x28)
// Class EasyMultiSave.EMSCustomSaveGame
class UEMSCustomSaveGame : public USaveGame
{
public:
	class FString                                SaveGameName;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSaveSlot;                                      // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEMSCustomSaveGame* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EasyMultiSave.EMSFunctionLibrary
class UEMSFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEMSFunctionLibrary* GetDefaultObj();

	void SetCurrentSaveUserName(class UObject* WorldContextObject, const class FString& Username);
	void SetCurrentSaveGameName(class UObject* WorldContextObject, const class FString& SaveGameName);
	void SetActorSaveProperties(class UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform);
	bool SaveCustom(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame);
	bool IsWorldPartition(class UObject* WorldContextObject);
	bool IsSavingOrLoading(class UObject* WorldContextObject);
	class UTexture2D* ImportSaveThumbnail(class UObject* WorldContextObject, const class FString& SaveGameName);
	TArray<class FString> GetSortedSaveSlots(class UObject* WorldContextObject);
	class UEMSInfoSaveGame* GetSlotInfoSaveGame(class UObject* WorldContextObject, class FString* SaveGameName);
	class UEMSInfoSaveGame* GetNamedSlotInfo(class UObject* WorldContextObject, const class FString& SaveGameName);
	class UEMSCustomSaveGame* GetCustomSave(class UObject* WorldContextObject, TSubclassOf<class UEMSCustomSaveGame> SaveGameClass);
	TArray<class FString> GetAllSaveUsers(class UObject* WorldContextObject);
	void ExportSaveThumbnail(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const class FString& SaveGameName);
	bool DoesSaveSlotExist(class UObject* WorldContextObject, const class FString& SaveGameName);
	void DeleteSaveUser(class UObject* WorldContextObject, const class FString& Username);
	void DeleteCustomSave(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame);
	void DeleteAllSaveDataForSlot(class UObject* WorldContextObject, const class FString& SaveGameName);
	void ClearMultiLevelSave(class UObject* WorldContextObject);
};

// 0x30 (0x58 - 0x28)
// Class EasyMultiSave.EMSInfoSaveGame
class UEMSInfoSaveGame : public USaveGame
{
public:
	struct FSaveSlotInfo                         SlotInfo;                                          // 0x28(0x30)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEMSInfoSaveGame* GetDefaultObj();

};

// 0x310 (0x340 - 0x30)
// Class EasyMultiSave.EMSObject
class UEMSObject : public UGameInstanceSubsystem
{
public:
	class FString                                CurrentSaveGameName;                               // 0x30(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentSaveUserName;                               // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActorSaveData>                SavedActors;                                       // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_E56[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorList;                                         // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FLevelArchive>                 LevelArchiveList;                                  // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FMultiLevelStreamingData              MultiLevelStreamData;                              // 0xC0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FPlayerStackArchive                   PlayerStackData;                                   // 0xE0(0x100)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FLevelScriptSaveData>          SavedScripts;                                      // 0x1E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FGameObjectSaveData                   SavedGameMode;                                     // 0x1F0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FGameObjectSaveData                   SavedGameState;                                    // 0x210(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FControllerSaveData                   SavedController;                                   // 0x230(0x38)(Transient, NativeAccessSpecifierPrivate)
	struct FPawnSaveData                         SavedPawn;                                         // 0x268(0x50)(Transient, NativeAccessSpecifierPrivate)
	struct FGameObjectSaveData                   SavedPlayerState;                                  // 0x2B8(0x20)(Transient, NativeAccessSpecifierPrivate)
	class UEMSInfoSaveGame*                      CachedSlotInfoSave;                                // 0x2D8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, class UEMSCustomSaveGame*> CachedCustomSaves;                                 // 0x2E0(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FActorSaveData>                WorldPartitionActors;                              // 0x330(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEMSObject* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class EasyMultiSave.EMSPluginSettings
class UEMSPluginSettings : public UObject
{
public:
	class FString                                DefaultSaveGameName;                               // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        SlotInfoSaveGameClass;                             // 0x38(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFileSaveMethod                   FileSaveMethod;                                    // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdvancedSpawnCheck;                               // 0x59(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleActorNames;                                 // 0x5A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSaveStructs;                                  // 0x5B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMultiThreadSaving;                                // 0x5C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoadMethod                       LoadMethod;                                        // 0x5D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E71[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeferredLoadStackSize;                             // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AsyncWaitDelay;                                    // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMultiLevelSaveMethod             MultiLevelSaving;                                  // 0x68(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPersistentPlayer;                                 // 0x69(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPersistentGameMode;                               // 0x6A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompressionMethod                CompressionMethod;                                 // 0x6B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EThumbnailImageFormat             ThumbnailFormat;                                   // 0x6C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEMSPluginSettings* GetDefaultObj();

};

}


