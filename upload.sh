anaconda login
cd conda
for i in 'python-clanglite'; do
    conda build ${i%%/} -c StatisKit -c salford_systems;
    CONDA_FILE=`conda build ${i%%/} --output`;
    anaconda upload --force --user StatisKit ${CONDA_FILE%%};
done