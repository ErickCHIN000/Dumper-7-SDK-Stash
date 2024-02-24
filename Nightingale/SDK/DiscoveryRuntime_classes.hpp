#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xC0 - 0x48)
// Class DiscoveryRuntime.DiscoveryDataAsset
class UDiscoveryDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	uint8                                        Pad_DB5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UConditionBehaviour*                   Condition;                                         // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URewardBehaviour*>              Rewards;                                           // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDiscoveryPresentationData            QuestTaskPresentationData;                         // 0x68(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDiscoveryDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DiscoveryRuntime.DiscoverySystemInterface
class IDiscoverySystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDiscoverySystemInterface* GetDefaultObj();

	bool IsDiscoveryDataLoaded();
	bool IsDiscoveryComplete(class UDiscoveryDataAsset* DiscoveryDataAsset);
	bool IsDataLoadInProgress();
	void GetConditionHandleFromDiscovery(class UDiscoveryDataAsset* DiscoveryDataAsset, struct FGuid* OutHandle);
	void GetAllDiscoveryConditionHandles(TArray<struct FGuid>* OutHandles);
	void ClearLoadedDiscoveries();
	void AddDiscoveries(TArray<class UDiscoveryDataAsset*>& TestDiscoveries);
};

// 0x0 (0x28 - 0x28)
// Class DiscoveryRuntime.DiscoveryAccessInterface
class IDiscoveryAccessInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDiscoveryAccessInterface* GetDefaultObj();

	void GetDiscoverySystem(TScriptInterface<class IDiscoverySystemInterface>* DiscoverySystemInterface);
};

}


