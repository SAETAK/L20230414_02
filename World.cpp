#include "World.h"
#include "Actor.h"
#include <algorithm>

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto DeleteActor : Actors)
	{
		delete DeleteActor;
	}
}

void UWorld::SpawnActor(AActor* NewActor)
{
	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}
}

void UWorld::Tick()
{
	for (auto ProcessActor : Actors)
	{
		ProcessActor->Tick();
	}
}

void UWorld::Render()
{
	for (auto ProcessActor : Actors)
	{
		ProcessActor->Render();
	}
}

void UWorld::Sort()
{
	std::sort(Actors.begin(), Actors.end(), AActor::Compare);
}
